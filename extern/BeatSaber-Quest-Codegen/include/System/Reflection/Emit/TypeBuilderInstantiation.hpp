// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.TypeInfo
#include "System/Reflection/TypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Type because it is already included!
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Autogenerated type: System.Reflection.Emit.TypeBuilderInstantiation
  class TypeBuilderInstantiation : public System::Reflection::TypeInfo {
    public:
    // static System.Type MakeGenericType(System.Type type, System.Type[] typeArguments)
    // Offset: 0x136EAE8
    static System::Type* MakeGenericType(System::Type* type, ::Array<System::Type*>* typeArguments);
  }; // System.Reflection.Emit.TypeBuilderInstantiation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::TypeBuilderInstantiation*, "System.Reflection.Emit", "TypeBuilderInstantiation");
#pragma pack(pop)
