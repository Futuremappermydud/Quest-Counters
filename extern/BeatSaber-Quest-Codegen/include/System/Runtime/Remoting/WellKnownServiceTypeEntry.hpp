// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.TypeEntry
#include "System/Runtime/Remoting/TypeEntry.hpp"
// Including type: System.Runtime.Remoting.WellKnownObjectMode
#include "System/Runtime/Remoting/WellKnownObjectMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.WellKnownServiceTypeEntry
  class WellKnownServiceTypeEntry : public System::Runtime::Remoting::TypeEntry {
    public:
    // private System.Type obj_type
    // Offset: 0x20
    System::Type* obj_type;
    // private System.String obj_uri
    // Offset: 0x28
    ::Il2CppString* obj_uri;
    // private System.Runtime.Remoting.WellKnownObjectMode obj_mode
    // Offset: 0x30
    System::Runtime::Remoting::WellKnownObjectMode obj_mode;
    // public System.Void .ctor(System.String typeName, System.String assemblyName, System.String objectUri, System.Runtime.Remoting.WellKnownObjectMode mode)
    // Offset: 0xE21CFC
    static WellKnownServiceTypeEntry* New_ctor(::Il2CppString* typeName, ::Il2CppString* assemblyName, ::Il2CppString* objectUri, System::Runtime::Remoting::WellKnownObjectMode mode);
    // public System.Runtime.Remoting.WellKnownObjectMode get_Mode()
    // Offset: 0xE21E70
    System::Runtime::Remoting::WellKnownObjectMode get_Mode();
    // public System.Type get_ObjectType()
    // Offset: 0xE21E78
    System::Type* get_ObjectType();
    // public System.String get_ObjectUri()
    // Offset: 0xE21E80
    ::Il2CppString* get_ObjectUri();
    // public override System.String ToString()
    // Offset: 0xE21E88
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.Remoting.WellKnownServiceTypeEntry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::WellKnownServiceTypeEntry*, "System.Runtime.Remoting", "WellKnownServiceTypeEntry");
#pragma pack(pop)
