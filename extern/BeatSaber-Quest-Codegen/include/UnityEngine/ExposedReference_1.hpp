// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.PropertyName
#include "UnityEngine/PropertyName.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: IExposedPropertyTable
  class IExposedPropertyTable;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ExposedReference`1
  template<typename T>
  struct ExposedReference_1 : public System::ValueType {
    static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_convertible_v<T, UnityEngine::Object*>));
    public:
    // public UnityEngine.PropertyName exposedName
    // Offset: 0x0
    UnityEngine::PropertyName exposedName;
    // public UnityEngine.Object defaultValue
    // Offset: 0x0
    UnityEngine::Object* defaultValue;
    // Creating value type constructor for type: ExposedReference_1
    constexpr ExposedReference_1(UnityEngine::PropertyName exposedName_ = {}, UnityEngine::Object* defaultValue_ = {}) noexcept : exposedName{exposedName_}, defaultValue{defaultValue_} {}
    // public T Resolve(UnityEngine.IExposedPropertyTable resolver)
    // Offset: 0xFFFFFFFF
    T Resolve(UnityEngine::IExposedPropertyTable* resolver) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(*this, "Resolve", resolver));
    }
  }; // UnityEngine.ExposedReference`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ExposedReference_1, "UnityEngine", "ExposedReference`1");
#pragma pack(pop)