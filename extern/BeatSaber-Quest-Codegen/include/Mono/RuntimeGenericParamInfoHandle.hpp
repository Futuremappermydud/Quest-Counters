// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: GenericParameterAttributes
  struct GenericParameterAttributes;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.RuntimeGenericParamInfoHandle
  struct RuntimeGenericParamInfoHandle : public System::ValueType {
    public:
    // private Mono.RuntimeStructs/GenericParamInfo* value
    // Offset: 0x0
    Mono::RuntimeStructs::GenericParamInfo* value;
    // Creating value type constructor for type: RuntimeGenericParamInfoHandle
    constexpr RuntimeGenericParamInfoHandle(Mono::RuntimeStructs::GenericParamInfo* value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator Mono::RuntimeStructs::GenericParamInfo*
    constexpr operator Mono::RuntimeStructs::GenericParamInfo*() const noexcept {
      return value;
    }
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xA408A8
    static RuntimeGenericParamInfoHandle* New_ctor(System::IntPtr ptr);
    // System.Type[] get_Constraints()
    // Offset: 0xA408D4
    ::Array<System::Type*>* get_Constraints();
    // System.Reflection.GenericParameterAttributes get_Attributes()
    // Offset: 0xA408DC
    System::Reflection::GenericParameterAttributes get_Attributes();
    // private System.Type[] GetConstraints()
    // Offset: 0xA408F8
    ::Array<System::Type*>* GetConstraints();
    // private System.Int32 GetConstraintsCount()
    // Offset: 0xA40900
    int GetConstraintsCount();
  }; // Mono.RuntimeGenericParamInfoHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeGenericParamInfoHandle, "Mono", "RuntimeGenericParamInfoHandle");
#pragma pack(pop)