#include "typedefs.h"  // needed for some il2cpp_type_check things and MulticastDelegate for MakeAction
#ifndef IL2CPP_UTILS_H
#define IL2CPP_UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <optional>
#include <vector>

#include "il2cpp-functions.hpp"
#include "logging.hpp"
#include "utils.h"
#include "il2cpp-type-check.hpp"

namespace il2cpp_utils {
    // Init all of the usable il2cpp API, if it has yet to be initialized
    // Maximum length of characters of an exception message - 1
    #define EXCEPTION_MESSAGE_SIZE 4096
    // Returns a legible string from an Il2CppException*
    std::string ExceptionToString(Il2CppException* exp);

    // Seriously, don't un-const the returned Type
    const Il2CppType* MakeRef(const Il2CppType* type);

    // Generally, it's better to just use class_from_type!
    const Il2CppType* UnRef(const Il2CppType* type);

    /// @brief Instantiates a generic MethodInfo* from the provided Il2CppClasses.
    /// @details This method will not crash.
    /// @return MethodInfo* for RunMethod calls, will be nullptr on failure
    const MethodInfo* MakeGenericMethod(const MethodInfo* info, std::vector<Il2CppClass*> types) noexcept;

    std::vector<const Il2CppType*> ClassVecToTypes(std::vector<const Il2CppClass*> seq);

    // Gets the System.Type Il2CppObject* (actually an Il2CppReflectionType*) for an Il2CppClass*
    Il2CppReflectionType* GetSystemType(const Il2CppClass* klass);
    Il2CppReflectionType* GetSystemType(const Il2CppType* typ);

    // Gets the System.Type Il2CppObject* (actually an Il2CppReflectionType*) for the class with the given namespace and name
    Il2CppReflectionType* GetSystemType(std::string_view nameSpace, std::string_view className);

    // Gets the standard class name of an Il2CppClass*
    std::string ClassStandardName(Il2CppClass* klass, bool generics = true);

    // Gets a C# name of a type
    const char* TypeGetSimpleName(const Il2CppType* type);

    bool IsInterface(const Il2CppClass* klass);

    template<typename T>
    Il2CppClass* ExtractClass(T&& arg) {
        Il2CppClass* klass = il2cpp_type_check::il2cpp_arg_class<std::decay_t<T>>::get(arg);
        if (!klass) {
            Logger::get().error("ExtractClass: failed to determine class! Tips: instead of nullptr, pass the Il2CppType* or Il2CppClass* of the argument instead!");
        }
        return klass;
    }

    template<typename T>
    const Il2CppType* ExtractType(T&& arg) {
        const Il2CppType* typ = il2cpp_type_check::il2cpp_arg_type<T>::get(arg);
        if (!typ) {
            Logger::get().error("ExtractType: failed to determine type! Tips: instead of nullptr, pass the Il2CppType* or Il2CppClass* of the argument instead!");
        }
        return typ;
    }

    inline auto ExtractTypes() {
        return std::vector<const Il2CppType*>();
    }

    template<typename T, typename... TArgs>
    std::vector<const Il2CppType*> ExtractTypes(T&& arg, TArgs&&... args) {
        auto* tFirst = ExtractType(arg);
        auto tOthers = ExtractTypes(args...);
        if (tFirst) tOthers.insert(tOthers.begin(), tFirst);
        return tOthers;
    }

    // Returns if a given MethodInfo's parameters match the Il2CppType vector
    bool ParameterMatch(const MethodInfo* method, std::vector<const Il2CppType*> argTypes);

    // Returns if a given MethodInfo's parameters match the Il2CppType vector and generic types vector
    bool ParameterMatch(const MethodInfo* method, std::vector<const Il2CppType*> argTypes, std::vector<Il2CppClass*> genTypes);

    // Returns the MethodInfo for the method on the given class with the given name and number of arguments
    // Created by zoller27osu
    const MethodInfo* FindMethodUnsafe(Il2CppClass* klass, std::string_view methodName, int argsCount);
    const MethodInfo* FindMethodUnsafe(Il2CppObject* instance, std::string_view methodName, int argsCount);
    const MethodInfo* FindMethodUnsafe(std::string_view nameSpace, std::string_view className, std::string_view methodName, int argsCount);

    // Returns the MethodInfo for the method on the given class with the given name and types of arguments
    // Created by zoller27osu
    const MethodInfo* FindMethod(Il2CppClass* klass, std::string_view methodName, std::vector<Il2CppClass*> genTypes, std::vector<const Il2CppType*> argTypes);
    const MethodInfo* FindMethod(Il2CppClass* klass, std::string_view methodName, std::vector<Il2CppClass*> genTypes, std::vector<const Il2CppClass*> argClasses);
    const MethodInfo* FindMethod(Il2CppClass* klass, std::string_view methodName, std::vector<Il2CppClass*> genTypes, std::vector<std::string_view> argSpaceClass);
    
    template <typename T, typename... TArgs>
    std::enable_if_t<(... && !is_vector<TArgs>::value) && !std::is_convertible_v<T, std::string_view>, const MethodInfo*>
    FindMethod(T&& classOrInstance, std::string_view methodName, std::vector<Il2CppClass*> genTypes, TArgs&&... args) {
        if constexpr (sizeof...(TArgs) == 1 && (std::is_integral_v<std::decay_t<TArgs>> && ...)) {
            static_assert(false_t<TArgs...>,
                "FindMethod using argCount is invalid! If argCount is 0 then remove it; otherwise use FindMethodUnsafe!");
        } else {
            auto* klass = RET_0_UNLESS(ExtractClass(classOrInstance));
            if constexpr (sizeof...(TArgs) == 0) {
                return FindMethodUnsafe(klass, methodName, 0);
            } else {
                return FindMethod(klass, methodName, genTypes, {args...});
            }
        }
    }
    
    // Returns the MethodInfo for the method on the given class or instance. Also the only non-vector arg types version.
    template <typename T, typename... TArgs>
    // prevents template recursion and ambiguity with the double string version:
    std::enable_if_t<(... && !is_vector<TArgs>::value) && !std::is_convertible_v<T, std::string_view>, const MethodInfo*>
    FindMethod(T&& classOrInstance, std::string_view methodName, TArgs&&... args) {
        return FindMethod(classOrInstance, methodName, {}, args...);
    }

    // Returns the MethodInfo for the method on class found via namespace and name with the given other arguments
    template<class... TArgs>
    const MethodInfo* FindMethod(std::string_view nameSpace, std::string_view className, TArgs&&... params) {
        return FindMethod(GetClassFromName(nameSpace, className), params...);
    }

    template<class T>
    void* ExtractValue(T&& arg) {
        il2cpp_functions::Init();

        using Dt = std::decay_t<T>;
        if constexpr (std::is_same_v<Dt, Il2CppType*> || std::is_same_v<Dt, Il2CppClass*>) {
            return nullptr;
        } else if constexpr (std::is_pointer_v<Dt>) {
            if constexpr (std::is_base_of_v<Il2CppObject, std::remove_pointer_t<Dt>>) {
                if (arg) {
                    auto* klass = il2cpp_functions::object_get_class(arg);
                    if (klass && klass->valuetype) {
                        // Arg is an Il2CppObject* of a value type. It needs to be unboxed.
                        return il2cpp_functions::object_unbox(arg);
                    }
                }
            }
            return arg;
        } else {
            return const_cast<Dt*>(&arg);
        }
    }

    inline auto ExtractValues() {
        return std::vector<void*>();
    }

    template<class T, class... TArgs>
    std::vector<void*> ExtractValues(T&& arg, TArgs&& ...args) {
        auto* firstVal = ExtractValue(arg);
        auto otherVals = ExtractValues(args...);
        otherVals.insert(otherVals.begin(), firstVal);  // inserts at front
        return otherVals;
    }

    Il2CppClass* GetParamClass(const MethodInfo* method, int paramIdx);
    Il2CppClass* GetFieldClass(FieldInfo* field);
    bool IsConvertible(const Il2CppType* to, const Il2CppType* from, bool asArgs = true);

    // Like ExtractType, but only returns an Il2CppType* if it can be extracted without an instance of T.
    template<class T>
    const Il2CppType* ExtractIndependentType() {
        using arg_class = il2cpp_type_check::il2cpp_no_arg_class<T>;
        if constexpr (has_no_arg_get<arg_class>) {
            il2cpp_functions::Init();
            auto* klass = CRASH_UNLESS(arg_class::get());
            return il2cpp_functions::class_get_type(klass);
        }
        return nullptr;
    }

    template<class TOut = Il2CppObject*, bool checkTypes = true, class T, class... TArgs>
    // Runs a MethodInfo with the specified parameters and instance, with return type TOut.
    // Assumes a static method if instance == nullptr. May fail due to exception or wrong name, hence the std::optional.
    std::optional<TOut> RunMethod(T&& instance, const MethodInfo* method, TArgs&& ...params) {
        RET_NULLOPT_UNLESS(method);

        if constexpr (checkTypes && sizeof...(TArgs) > 0) {
            auto typeVec = ExtractTypes(params...);
            RET_NULLOPT_UNLESS(typeVec.size() == sizeof...(TArgs));
            RET_NULLOPT_UNLESS(ParameterMatch(method, typeVec));
        }

        void* inst = ExtractValue(instance);  // null is allowed (for T = Il2CppType* or Il2CppClass*)
        Il2CppException* exp = nullptr;
        auto invokeParamsVec = ExtractValues(params...);
        auto* ret = il2cpp_functions::runtime_invoke(method, inst, invokeParamsVec.data(), &exp);

        // Check if the TOut that the user requested makes sense given the Il2CppObject* we actually got
        if (ret) {
            // By using this instead of ExtractType, we avoid unboxing because the ultimate type in that case would depend on the
            // method in the first place
            auto* outType = ExtractIndependentType<TOut>();
            if (outType) {
                auto* retType = ExtractType(ret);
                if (!IsConvertible(outType, retType, false)) {
                    Logger::get().warning("User requested TOut %s does not match the method's return object of type %s!",
                        TypeGetSimpleName(outType), TypeGetSimpleName(retType));
                }
            }
        }

        // Convert the Il2CppObject* we got from runtime_invoke to TOut.
        TOut out;
        if constexpr (std::is_pointer_v<TOut>) {
            using Dt = std::decay_t<TOut>;
            if constexpr (std::is_base_of_v<Il2CppObject, std::remove_pointer_t<Dt>>) {
                out = static_cast<TOut>(static_cast<Il2CppObject*>(ret));
            } else {
                out = reinterpret_cast<TOut>(ret);
            }
        } else {
            out = *reinterpret_cast<TOut*>(il2cpp_functions::object_unbox(ret));
        }

        if (exp) {
            Logger::get().error("il2cpp_utils: RunMethod: %s: Failed with exception: %s", il2cpp_functions::method_get_name(method),
                il2cpp_utils::ExceptionToString(exp).c_str());
            return std::nullopt;
        }
        return out;
    }

    template<class TOut = Il2CppObject*, class T, class... TArgs>
    // Runs a (static) method with the specified method name, with return type TOut.
    // Checks the types of the parameters against the candidate methods.
    std::enable_if_t<!std::is_convertible_v<T, std::string_view>, std::optional<TOut>>
    RunMethod(T&& classOrInstance, std::string_view methodName, TArgs&& ...params) {
        auto types = ExtractTypes(params...);
        if (types.size() != sizeof...(TArgs)) {
            Logger::get().warning("RunMethod: ExtractTypes for method %s failed!", methodName.data());
            return std::nullopt;
        }

        auto* method = RET_NULLOPT_UNLESS(FindMethod(classOrInstance, methodName, {}, types));
        return RunMethod<TOut, false>(classOrInstance, method, params...);
    }

    template<class TOut = Il2CppObject*, class T, class... TArgs>
    // Runs a (static) method with the specified method name and number of arguments, with return type TOut.
    // DOES NOT PERFORM TYPE CHECKING.
    std::enable_if_t<std::is_base_of_v<Il2CppClass, T> || std::is_base_of_v<Il2CppObject, T>, std::optional<TOut>>
    RunMethodUnsafe(T* classOrInstance, std::string_view methodName, TArgs&& ...params) {
        RET_NULLOPT_UNLESS(classOrInstance);
        auto* method = RET_NULLOPT_UNLESS(FindMethodUnsafe(classOrInstance, methodName, sizeof...(TArgs)));
        return RunMethod<TOut, false>(classOrInstance, method, params...);
    }

    template<class TOut = Il2CppObject*, class... TArgs>
    // Runs a static method with the specified method name and arguments, on the class with the specified namespace and class name.
    // The method also has return type TOut.
    std::optional<TOut> RunMethod(std::string_view nameSpace, std::string_view klassName, std::string_view methodName, TArgs&& ...params) {
        auto* klass = RET_NULLOPT_UNLESS(GetClassFromName(nameSpace, klassName));
        return RunMethod<TOut>(klass, methodName, params...);
    }

    template<class TOut = Il2CppObject*, class... TArgs>
    // Runs a static method with the specified method name and arguments, on the class with the specified namespace and class name.
    // The method also has return type TOut.
    // DOES NOT PERFORM TYPE CHECKING.
    std::optional<TOut> RunMethodUnsafe(std::string_view nameSpace, std::string_view klassName, std::string_view methodName, TArgs&& ...params) {
        auto* klass = RET_NULLOPT_UNLESS(GetClassFromName(nameSpace, klassName));
        return RunMethodUnsafe<TOut>(klass, methodName, params...);
    }

    /// @brief Instantiates a generic MethodInfo* from the provided Il2CppClasses and invokes it.
    /// @n This method will not crash.
    /// @tparam TOut The return type of the method to invoke
    /// @tparam T Instance type
    /// @tparam TArgs Parameters to RunMethod
    /// @param instance Instance to RunMethod, or null/class
    /// @param info Generic MethodInfo* to invoke
    /// @param genTypes Types to instantiate the generic MethodInfo* with
    /// @param params Parameters to RunMethod
    template<class TOut = Il2CppObject*, class T, class... TArgs>
    std::optional<TOut> RunGenericMethod(T&& instance, const MethodInfo* info, std::vector<Il2CppClass*> genTypes, TArgs&& ...params) noexcept {
        auto* createdMethod = RET_NULLOPT_UNLESS(MakeGenericMethod(info, genTypes));
        return RunMethod<TOut, false>(instance, createdMethod, params...);
    }

    template<class TOut = Il2CppObject*, class T, class... TArgs>
    std::optional<TOut> RunGenericMethod(T&& classOrInstance, std::string_view methodName, std::vector<Il2CppClass*> genTypes, TArgs&& ...params) noexcept {
        auto types = ExtractTypes(params...);
        if (types.size() != sizeof...(TArgs)) {
            Logger::get().warning("RunGenericMethod: ExtractTypes for method %s failed!", methodName.data());
            return std::nullopt;
        }

        auto* info = RET_NULLOPT_UNLESS(FindMethod(classOrInstance, methodName, genTypes, types));
        return RunGenericMethod<TOut>(classOrInstance, info, genTypes, params...);
    }

    template<class TOut = Il2CppObject*, class... TArgs>
    // Runs a static generic method with the specified method name and arguments, on the class with the specified namespace and class name.
    // The method also has return type TOut.
    std::optional<TOut> RunGenericMethod(std::string_view nameSpace, std::string_view klassName, std::string_view methodName, std::vector<Il2CppClass*> genTypes, TArgs&& ...params) noexcept {
        auto* klass = RET_NULLOPT_UNLESS(GetClassFromName(nameSpace, klassName));
        return RunGenericMethod<TOut>(klass, methodName, genTypes, params...);
    }

    template<typename TObj = Il2CppObject, typename... TArgs>
    // Creates a new object of the given class using the given constructor parameters and casts it to TObj*
    // Will only run a .ctor whose parameter types match the given arguments.
    TObj* New(Il2CppClass* klass, TArgs&& ...args) {
        il2cpp_functions::Init();

        // object_new call
        auto* obj = RET_0_UNLESS(reinterpret_cast<TObj*>(il2cpp_functions::object_new(klass)));
        // runtime_invoke constructor with right type(s) of arguments, return null if constructor errors
        RET_0_UNLESS(RunMethod(obj, ".ctor", args...));
        return obj;
    }

    template<typename TObj = Il2CppObject, typename... TArgs>
    // Creates a new object of the given class using the given constructor parameters and casts it to TObj*
    // DOES NOT PERFORM ARGUMENT TYPE CHECKING! Uses the first .ctor with the right number of parameters it sees.
    TObj* NewUnsafe(Il2CppClass* klass, TArgs* ...args) {
        il2cpp_functions::Init();

        // object_new call
        auto* obj = RET_0_UNLESS(reinterpret_cast<TObj*>(il2cpp_functions::object_new(klass)));
        // runtime_invoke constructor with right number of args, return null if constructor errors
        RET_0_UNLESS(RunMethodUnsafe(obj, ".ctor", args...));
        return obj;
    }

    template<typename TObj = Il2CppObject, typename... TArgs>
    // Creates a new object of the class with the given nameSpace and className using the given constructor parameters and casts
    // it to TObj*. Will only run a .ctor whose parameter types match the given arguments.
    TObj* New(std::string_view nameSpace, std::string_view className, TArgs&& ...args) {
        auto* klass = RET_0_UNLESS(GetClassFromName(nameSpace, className));
        return New<TObj>(klass, args...);
    }

    template<typename TObj = Il2CppObject, typename... TArgs>
    // Creates a new object of the class with the given nameSpace and className using the given constructor parameters and casts
    // it to TObj*. DOES NOT PERFORM ARGUMENT TYPE CHECKING! Uses the first .ctor with the right number of parameters it sees.
    TObj* NewUnsafe(std::string_view nameSpace, std::string_view className, TArgs* ...args) {
        auto* klass = RET_0_UNLESS(GetClassFromName(nameSpace, className));
        return NewUnsafe<TObj>(klass, args...);
    }

    // Returns the FieldInfo for the field of the given class with the given name
    // Created by zoller27osu
    FieldInfo* FindField(Il2CppClass* klass, std::string_view fieldName);
    // Wrapper for FindField taking a namespace and class name in place of an Il2CppClass*
    template<class... TArgs>
    FieldInfo* FindField(std::string_view nameSpace, std::string_view className, TArgs&&... params) {
        return FindField(GetClassFromName(nameSpace, className), params...);
    }
    // Wrapper for FindField taking an instance to extract the Il2CppClass* from
    template<class T, class... TArgs>
    std::enable_if_t<!std::is_convertible_v<T, std::string_view>, FieldInfo*>
    FindField(T&& instance, TArgs&&... params) {
        il2cpp_functions::Init();

        auto* klass = RET_0_UNLESS(ExtractClass(instance));
        return FindField(klass, params...);
    }

    template<typename TOut = Il2CppObject*>
    // Gets a value from the given object instance, and FieldInfo, with return type TOut
    // Assumes a static field if instance == nullptr
    // Created by darknight1050, modified by Sc2ad and zoller27osu
    std::optional<TOut> GetFieldValue(Il2CppObject* instance, FieldInfo* field) {
        il2cpp_functions::Init();
        RET_NULLOPT_UNLESS(field);

        // Check that the TOut requested by the user matches the field.
        auto* outType = ExtractIndependentType<TOut>();
        if (outType && !IsConvertible(outType, field->type, false)) {
            Logger::get().warning("User requested TOut %s does not match the field's type, %s!",
                TypeGetSimpleName(outType), TypeGetSimpleName(field->type));
        }

        TOut out;
        if constexpr (std::is_convertible_v<TOut, Il2CppObject*>) {
            out = static_cast<TOut>(static_cast<Il2CppObject*>(il2cpp_functions::field_get_value_object(field, instance)));
        } else {
            if (instance) {
                il2cpp_functions::field_get_value(instance, field, &out);
            } else { // Fallback to perform a static field set
                il2cpp_functions::field_static_get_value(field, &out);
            }
        }
        return out;
    }

    template<class T>
    Il2CppObject* ExtractObject(T&& arg) {
        il2cpp_functions::Init();

        using Dt = std::decay_t<T>;
        if constexpr (std::is_same_v<Dt, Il2CppType*> || std::is_same_v<Dt, Il2CppClass*>) {
            return nullptr;
        } else if constexpr(std::is_convertible_v<Dt, Il2CppObject*>) {
            return static_cast<Il2CppObject*>(arg);
        }

        auto* typ = RET_0_UNLESS(ExtractType(arg));
        auto* klass = RET_0_UNLESS(il2cpp_functions::class_from_il2cpp_type(typ));
        void* val = ExtractValue(arg);
        return il2cpp_functions::value_box(klass, val);
    }

    template<class T>
    bool UnextractObject(T& orig, Il2CppObject* modified) {
        il2cpp_functions::Init();
        if (!modified) return true;

        using Dt = std::decay_t<T>;
        if constexpr(std::is_convertible_v<Dt, Il2CppObject*>) {
            orig = static_cast<T>(static_cast<Il2CppObject*>(modified));
        } else {
            void* val = RET_0_UNLESS(il2cpp_functions::object_unbox(modified));
            if constexpr (std::is_pointer_v<Dt>) {
                // TODO: would orig = static_cast<Dt>(val); work?
                *orig = *static_cast<Dt>(val);
            } else {
                orig = *static_cast<Dt*>(val);
            }
        }
        return true;
    }

    template<typename TOut = Il2CppObject*, typename T>
    // Gets the value of the field with type TOut and the given name from the given class
    // Adapted by zoller27osu
    std::optional<TOut> GetFieldValue(T&& classOrInstance, std::string_view fieldName) {
        auto* field = RET_NULLOPT_UNLESS(FindField(classOrInstance, fieldName));
        Il2CppObject* obj = ExtractObject(classOrInstance);  // null is allowed (for T = Il2CppType* or Il2CppClass*)
        return GetFieldValue<TOut>(obj, field);
    }

    template<typename TOut = Il2CppObject*>
    // Gets the value of the static field with the given name from the class with the given nameSpace and className.
    std::optional<TOut> GetFieldValue(std::string_view nameSpace, std::string_view className, std::string_view fieldName) {
        auto* klass = RET_NULLOPT_UNLESS(GetClassFromName(nameSpace, className));
        return GetFieldValue<TOut>(klass, fieldName);
    }

    // TODO: typecheck the Set[Field/Property]Value methods' value params?

    // Sets the value of a given field, given an object instance and the FieldInfo.
    // Returns false if it fails
    // Assumes static field if instance == nullptr
    template<class TArg>
    bool SetFieldValue(Il2CppObject* instance, FieldInfo* field, TArg&& value) {
        il2cpp_functions::Init();
        RET_0_UNLESS(field);

        // Ensure supplied value matches field's type
        auto* typ = ExtractType(value);
        RET_0_UNLESS(IsConvertible(field->type, typ));

        void* val = ExtractValue(value);
        if (instance) {
            il2cpp_functions::field_set_value(instance, field, val);
        } else { // Fallback to perform a static field set
            il2cpp_functions::field_static_set_value(field, val);
        }
        return true;
    }

    // Sets the value of a given field, given a class or instance and the field name.
    // Returns false if it fails
    template<class T, class TArg>
    bool SetFieldValue(T& classOrInstance, std::string_view fieldName, TArg&& value) {
        auto* field = RET_0_UNLESS(FindField(classOrInstance, fieldName));
        Il2CppObject* obj = ExtractObject(classOrInstance);  // null is allowed (for T = Il2CppType* or Il2CppClass*)
        RET_0_UNLESS(SetFieldValue(obj, field, value));
        RET_0_UNLESS(UnextractObject(classOrInstance, obj));
        return true;
    }

    // Sets the value of the static field with the given name on the class with the given nameSpace and className.
    // Returns false if it fails
    template<class TArg>
    bool SetFieldValue(std::string_view nameSpace, std::string_view className, std::string_view fieldName, TArg&& value) {
        auto* klass = RET_0_UNLESS(GetClassFromName(nameSpace, className));
        return SetFieldValue(klass, fieldName, value);
    }

    // Returns the PropertyInfo for the property of the given class with the given name
    // Created by zoller27osu
    const PropertyInfo* FindProperty(Il2CppClass* klass, std::string_view propertyName);
    // Wrapper for FindProperty taking a namespace and class name in place of an Il2CppClass*
    const PropertyInfo* FindProperty(std::string_view nameSpace, std::string_view className, std::string_view propertyName);
    // Wrapper for FindProperty taking an instance to extract the Il2CppClass* from
    template<class T>
    const PropertyInfo* FindProperty(T&& instance, std::string_view propertyName) {
        il2cpp_functions::Init();

        auto* klass = RET_0_UNLESS(ExtractClass(instance));
        return FindProperty(klass, propertyName);
    }

    template<class TOut = Il2CppObject*, class T>
    // Gets a value from the given object instance, and PropertyInfo, with return type TOut.
    // Assumes a static property if instance == nullptr
    std::optional<TOut> GetPropertyValue(T&& classOrInstance, const PropertyInfo* prop) {
        il2cpp_functions::Init();
        RET_NULLOPT_UNLESS(prop);

        auto* getter = RET_NULLOPT_UNLESS(il2cpp_functions::property_get_get_method(prop));
        return RunMethod<TOut>(classOrInstance, getter);
    }

    template<typename TOut = Il2CppObject*, typename T>
    // Gets the value of the property with the given name from the given class or instance, and returns it as TOut.
    std::optional<TOut> GetPropertyValue(T&& classOrInstance, std::string_view propName) {
        auto* prop = RET_NULLOPT_UNLESS(FindProperty(classOrInstance, propName));
        return GetPropertyValue<TOut>(classOrInstance, prop);
    }

    template<typename TOut = Il2CppObject*>
    // Gets the value of the static property with the given name from the class with the given nameSpace and className.
    std::optional<TOut> GetPropertyValue(std::string_view nameSpace, std::string_view className, std::string_view propName) {
        auto* klass = RET_0_UNLESS(GetClassFromName(nameSpace, className));
        return GetPropertyValue<TOut>(klass, propName);
    }

    // Sets the value of a given property, given an object instance or class and PropertyInfo
    // Returns false if it fails.
    // Only static properties work with classOrInstance == nullptr
    template<class T, class TArg>
    bool SetPropertyValue(T& classOrInstance, const PropertyInfo* prop, TArg&& value) {
        il2cpp_functions::Init();
        RET_0_UNLESS(prop);

        auto* setter = RET_0_UNLESS(il2cpp_functions::property_get_set_method(prop));
        return (bool)RunMethod(classOrInstance, setter, value);
    }

    // Sets the value of a given property, given an object instance or class and property name
    // Returns false if it fails
    template<class T, class TArg>
    bool SetPropertyValue(T& classOrInstance, std::string_view propName, TArg&& value) {
        auto* prop = RET_0_UNLESS(FindProperty(classOrInstance, propName));
        return SetPropertyValue(classOrInstance, prop, value);
    }

    // Sets the value of a given static property, given the class' namespace and name, and the property name and value.
    // Returns false if it fails
    template<class TArg>
    bool SetPropertyValue(std::string_view nameSpace, std::string_view className, std::string_view propName, TArg&& value) {
        auto* klass = RET_0_UNLESS(GetClassFromName(nameSpace, className));
        return SetPropertyValue(klass, propName, value);
    }

    template<typename T = MulticastDelegate, typename TObj, typename R, typename... TArgs>
    // Creates an Action of type actionType, with the given callback and callback self 'obj', and casts it to a T*
    // PLEASE!!! use the below FieldInfo or MethodInfo versions instead if you can.
    // Created by zoller27osu
    T* MakeAction(const Il2CppType* actionType, TObj* obj, function_ptr_t<R, TArgs...> callback) {
        Il2CppClass* actionClass = il2cpp_functions::class_from_il2cpp_type(actionType);

        /*
        * TODO: call PlatformInvoke::MarshalFunctionPointerToDelegate directly instead of copying code from it,
        * or at least use a cache like utils::NativeDelegateMethodCache::GetNativeDelegate(nativeFunctionPointer);
        */
        const MethodInfo* invoke = il2cpp_functions::class_get_method_from_name(actionClass, "Invoke", -1);  // well-formed Actions have only 1 invoke method
        auto* method = (MethodInfo*) calloc(1, sizeof(MethodInfo));
        method->methodPointer = (Il2CppMethodPointer)callback;
        method->invoker_method = NULL;
        method->parameters_count = invoke->parameters_count;
        method->slot = kInvalidIl2CppMethodSlot;
        method->is_marshaled_from_native = true;  // "a fake MethodInfo wrapping a native function pointer"
        // In the event that a function is static, this will behave as normal
        if (obj == nullptr) method->flags |= METHOD_ATTRIBUTE_STATIC;

        // TODO: figure out why passing method directly doesn't work
        auto* action = il2cpp_utils::NewUnsafe<T>(actionClass, obj, &method);
        auto* asDelegate = reinterpret_cast<Delegate*>(action);
        if (asDelegate->method_ptr != (void*)callback) {
            Logger::get().error("Created Action's method_ptr (%p) is incorrect (should be %p)!", asDelegate->method_ptr, callback);
            return nullptr;
        }
        return action;
    }

    template<typename T = MulticastDelegate, typename TObj>
    T* MakeAction(const Il2CppType* actionType, TObj* obj, void* callback) {
        auto tmp = reinterpret_cast<function_ptr_t<void>>(callback);
        return MakeAction(actionType, obj, tmp);
    }

    // Creates an Action fit to be passed in the given parameter position to the given method.
    template<typename T = MulticastDelegate, typename T1, typename T2>
    T* MakeAction(const MethodInfo* method, int paramIdx, T1&& arg1, T2&& arg2) {
        auto* actionType = RET_0_UNLESS(il2cpp_functions::method_get_param(method, paramIdx));
        return MakeAction<T, void>(actionType, arg1, arg2);
    }

    // Creates an Action fit to be assigned to the given field.
    template<typename T = MulticastDelegate, typename T1, typename T2>
    T* MakeAction(FieldInfo* field, T1&& arg1, T2&& arg2) {
        auto* actionType = RET_0_UNLESS(il2cpp_functions::field_get_type(field));
        return MakeAction<T, void>(actionType, arg1, arg2);
    }

    // Intializes an object (using the given args) fit to be passed to the given method at the given parameter index.
    template<typename... TArgs>
    Il2CppObject* CreateParam(const MethodInfo* method, int paramIdx, TArgs&& ...args) {
        auto* klass = RET_0_UNLESS(GetParamClass(method, paramIdx));
        return il2cpp_utils::New(klass, args...);
    }

    template<typename... TArgs>
    Il2CppObject* CreateParamUnsafe(const MethodInfo* method, int paramIdx, TArgs&& ...args) {
        auto* klass = RET_0_UNLESS(GetParamClass(method, paramIdx));
        return il2cpp_utils::NewUnsafe(klass, args...);
    }

    // Intializes an object (using the given args) fit to be assigned to the given field.
    template<typename... TArgs>
    Il2CppObject* CreateFieldValue(FieldInfo* field, TArgs&& ...args) {
        auto* klass = RET_0_UNLESS(GetFieldClass(field));
        return il2cpp_utils::New(klass, args...);
    }

    template<typename... TArgs>
    Il2CppObject* CreateFieldValueUnsafe(FieldInfo* field, TArgs&& ...args) {
        auto* klass = RET_0_UNLESS(GetFieldClass(field));
        return il2cpp_utils::NewUnsafe(klass, args...);
    }

    /// @brief Converts a vector to an Array*
    /// @tparam T Inner type of the vector and array
    /// @param vec Vector to create the Array from
    /// @return The created Array<T>*
    template<typename T>
    Array<T>* vectorToArray(std::vector<T>& vec) {
        il2cpp_functions::Init();
        Array<T>* arr = reinterpret_cast<Array<T>*>(RET_0_UNLESS(il2cpp_functions::array_new(il2cpp_type_check::il2cpp_no_arg_class<T>::get(), vec.size())));
        for (size_t i = 0; i < vec.size(); i++) {
            arr->values[i] = vec[i];
        }
        return arr;
    }

    // Calls the System.RuntimeType.MakeGenericType(System.Type gt, System.Type[] types) function
    Il2CppReflectionType* MakeGenericType(Il2CppReflectionType* gt, Il2CppArray* types);

    // Function made by zoller27osu, modified by Sc2ad
    // Logs information about the given MethodInfo* as log(DEBUG)
    void LogMethod(const MethodInfo* method);

    // Created by zoller27osu
    // Calls LogMethod on all methods in the given class
    void LogMethods(Il2CppClass* klass, bool logParents = false);

    // Created by zoller27osu
    // Logs information about the given FieldInfo* as log(DEBUG)
    void LogField(FieldInfo* field);

    // Created by zoller27osu
    // Calls LogField on all fields in the given class
    void LogFields(Il2CppClass* klass, bool logParents = false);

    // Created by zoller27osu
    // Logs information about the given PropertyInfo* as log(DEBUG)
    void LogProperty(const PropertyInfo* field);

    // Created by zoller27osu
    // Calls LogProperty on all properties in the given class
    void LogProperties(Il2CppClass* klass, bool logParents = false);

    // Some parts provided by zoller27osu
    // Logs information about the given Il2CppClass* as log(DEBUG)
    void LogClass(Il2CppClass* klass, bool logParents = false);

    // Logs all classes (from every namespace) that start with the given prefix
    // WARNING: THIS FUNCTION IS VERY SLOW. ONLY USE THIS FUNCTION ONCE AND WITH A FAIRLY SPECIFIC PREFIX!
    void LogClasses(std::string_view classPrefix, bool logParents = false);

    // Adds the given TypeDefinitionIndex to the class hash table of a given image
    // Mainly used in LogClasses
    void AddTypeToNametoClassHashTable(const Il2CppImage* img, TypeDefinitionIndex index);

    // Adds the given nested types of the namespaze, parentName, and klass to the hastable
    // Mainly used in AddTypeToNametoClassHashTable
    void AddNestedTypesToNametoClassHashTable(Il2CppNameToTypeDefinitionIndexHashTable* hashTable, const char *namespaze, const std::string& parentName, Il2CppClass *klass);

    // Adds the given nested types of typeDefinition to the class hash table of a given image
    // Mainly used in AddTypeToNametoClassHashTable
    void AddNestedTypesToNametoClassHashTable(const Il2CppImage* img, const Il2CppTypeDefinition* typeDefinition);

    enum StringType {
        Temporary,  // string is normal C# object, may be GC'd
        Manual,     // string is owned by C++, must be manually freed
        Permanent   // string can never be freed/deleted
    };

    /// @brief Creates a new C# string and registers it with GC. Copies the input string.
    /// @param inp String view to create the string from.
    /// @param type The type of string to create
    /// @return Created string
    Il2CppString* createcsstr(std::string_view inp, StringType type = Temporary);

    // Returns if a given source object is an object of the given class
    // Created by zoller27osu
    [[nodiscard]] bool Match(const Il2CppObject* source, const Il2CppClass* klass) noexcept;

    // Asserts that a given source object is an object of the given class
    // Created by zoller27osu
    bool AssertMatch(const Il2CppObject* source, const Il2CppClass* klass);

    template<class To, class From>
    // Downcasts a class from From* to To*
    [[nodiscard]] auto down_cast(From* in) noexcept {
        static_assert(std::is_convertible_v<To*, From*>);
        return static_cast<To*>(in);
    }

    template<typename... TArgs>
    // Runtime Invoke, but with a list initializer for args
    Il2CppObject* RuntimeInvoke(const MethodInfo* method, Il2CppObject* reference, Il2CppException** exc, TArgs* ...args) {
        il2cpp_functions::Init();

        void* invokeParams[] = {reinterpret_cast<void*>(args)...};
        return il2cpp_functions::runtime_invoke(method, reference, invokeParams, exc);
    }
}
#endif /* IL2CPP_UTILS_H */
