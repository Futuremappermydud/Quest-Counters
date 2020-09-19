// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: System.Runtime.Versioning
namespace System::Runtime::Versioning {
  // Autogenerated type: System.Runtime.Versioning.TargetFrameworkAttribute
  class TargetFrameworkAttribute : public System::Attribute {
    public:
    // private System.String _frameworkName
    // Offset: 0x10
    ::Il2CppString* frameworkName;
    // private System.String _frameworkDisplayName
    // Offset: 0x18
    ::Il2CppString* frameworkDisplayName;
    // public System.Void .ctor(System.String frameworkName)
    // Offset: 0x1003684
    static TargetFrameworkAttribute* New_ctor(::Il2CppString* frameworkName);
    // public System.Void set_FrameworkDisplayName(System.String value)
    // Offset: 0x1003728
    void set_FrameworkDisplayName(::Il2CppString* value);
  }; // System.Runtime.Versioning.TargetFrameworkAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Versioning::TargetFrameworkAttribute*, "System.Runtime.Versioning", "TargetFrameworkAttribute");
#pragma pack(pop)
