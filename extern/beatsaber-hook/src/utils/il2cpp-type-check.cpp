#include "../../shared/utils/il2cpp-type-check.hpp"
#include "../../shared/utils/il2cpp-utils.hpp"
#include "hashing.hpp"
#include <unordered_map>

namespace il2cpp_utils {
    // It doesn't matter what types these are, they just need to be used correctly within the methods
    static std::unordered_map<std::pair<std::string, std::string>, Il2CppClass*, hash_pair> namesToClassesCache;

    Il2CppClass* GetClassFromName(std::string_view name_space, std::string_view type_name) {
        il2cpp_functions::Init();

        // TODO: avoid creating std::string at any point except new pair insertion via P0919
        // Check cache
        auto key = std::pair<std::string, std::string>(name_space, type_name);
        auto itr = namesToClassesCache.find(key);
        if (itr != namesToClassesCache.end()) {
            return itr->second;
        }
        auto dom = RET_0_UNLESS(il2cpp_functions::domain_get());
        size_t assemb_count;
        const Il2CppAssembly** allAssemb = il2cpp_functions::domain_get_assemblies(dom, &assemb_count);

        for (size_t i = 0; i < assemb_count; i++) {
            auto assemb = allAssemb[i];
            auto img = il2cpp_functions::assembly_get_image(assemb);
            if (!img) {
                Logger::get().error("Assembly with name: %s has a null image!", assemb->aname.name);
                continue;
            }
            auto klass = il2cpp_functions::class_from_name(img, name_space.data(), type_name.data());
            if (klass) {
                namesToClassesCache.emplace(key, klass);
                return klass;
            }
        }
        Logger::get().error("il2cpp_utils: GetClassFromName: could not find class with namepace: %s and name: %s",
            name_space.data(), type_name.data());
        return nullptr;
    }

    Il2CppClass* MakeGeneric(const Il2CppClass* klass, std::vector<const Il2CppClass*> args) {
        il2cpp_functions::Init();

        auto typ = RET_0_UNLESS(il2cpp_functions::defaults->systemtype_class);
        auto klassType = RET_0_UNLESS(GetSystemType(klass));

        // Call Type.MakeGenericType on it
        auto arr = il2cpp_functions::array_new_specific(typ, args.size());
        if (!arr) {
            Logger::get().error("il2cpp_utils: MakeGeneric: Failed to make new array with length: %zu", args.size());
            return nullptr;
        }

        int i = 0;
        for (auto arg : args) {
            auto* o = GetSystemType(arg);
            if (!o) {
                Logger::get().error("il2cpp_utils: MakeGeneric: Failed to get type for %s", il2cpp_functions::class_get_name_const(arg));
                return nullptr;
            }
            il2cpp_array_set(arr, void*, i, reinterpret_cast<void*>(o));
            i++;
        }

        auto* reflection_type = RET_0_UNLESS(MakeGenericType(reinterpret_cast<Il2CppReflectionType*>(klassType), arr));
        auto* ret = RET_0_UNLESS(il2cpp_functions::class_from_system_type(reflection_type));
        Logger::get().debug("il2cpp_utils: MakeGeneric: returning '%s'", ClassStandardName(ret).c_str());
        return ret;
    }

    Il2CppClass* MakeGeneric(const Il2CppClass* klass, const Il2CppType** types, uint32_t numTypes) {
        il2cpp_functions::Init();

        auto typ = RET_0_UNLESS(il2cpp_functions::defaults->systemtype_class);
        auto klassType = RET_0_UNLESS(GetSystemType(klass));

        // Call Type.MakeGenericType on it
        auto arr = il2cpp_functions::array_new_specific(typ, numTypes);
        if (!arr) {
            Logger::get().error("il2cpp_utils: MakeGeneric: Failed to make new array with length: %u", numTypes);
            return nullptr;
        }

        for (size_t i = 0; i < numTypes; i++) {
            const Il2CppType* arg = types[i];
            auto* o = GetSystemType(arg);
            if (!o) {
                Logger::get().error("il2cpp_utils: MakeGeneric: Failed to get system type for %s", il2cpp_functions::type_get_name(arg));
                return nullptr;
            }
            il2cpp_array_set(arr, void*, i, reinterpret_cast<void*>(o));
        }

        auto* reflection_type = RET_0_UNLESS(MakeGenericType(reinterpret_cast<Il2CppReflectionType*>(klassType), arr));
        auto* ret = RET_0_UNLESS(il2cpp_functions::class_from_system_type(reflection_type));
        Logger::get().debug("il2cpp_utils: MakeGeneric: returning '%s'", ClassStandardName(ret).c_str());
        return ret;
    }
}
template<int s, int t> struct check_size {
    static_assert(s == t, "wrong size");
};
check_size<sizeof(Il2CppObject), 0x10> il2cppObjectCheck;
check_size<kIl2CppSizeOfArray, 0x20> il2cppArrayCheck;
