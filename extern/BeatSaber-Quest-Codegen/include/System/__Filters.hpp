// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.__Filters
  class __Filters : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.__Filters Instance
    static System::__Filters* _get_Instance();
    // Set static field: static readonly System.__Filters Instance
    static void _set_Instance(System::__Filters* value);
    // System.Boolean FilterAttribute(System.Reflection.MemberInfo m, System.Object filterCriteria)
    // Offset: 0x17A3928
    bool FilterAttribute(System::Reflection::MemberInfo* m, ::Il2CppObject* filterCriteria);
    // System.Boolean FilterName(System.Reflection.MemberInfo m, System.Object filterCriteria)
    // Offset: 0x17A3C80
    bool FilterName(System::Reflection::MemberInfo* m, ::Il2CppObject* filterCriteria);
    // System.Boolean FilterIgnoreCase(System.Reflection.MemberInfo m, System.Object filterCriteria)
    // Offset: 0x17A3E18
    bool FilterIgnoreCase(System::Reflection::MemberInfo* m, ::Il2CppObject* filterCriteria);
    // static private System.Void .cctor()
    // Offset: 0x17A3FC8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17A3FC0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static __Filters* New_ctor();
  }; // System.__Filters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::__Filters*, "System", "__Filters");
#pragma pack(pop)
