// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Autogenerated type: System.Runtime.Remoting.Channels.CrossAppDomainData
  class CrossAppDomainData : public ::Il2CppObject {
    public:
    // private System.Object _ContextID
    // Offset: 0x10
    ::Il2CppObject* ContextID;
    // private System.Int32 _DomainID
    // Offset: 0x18
    int DomainID;
    // private System.String _processGuid
    // Offset: 0x20
    ::Il2CppString* processGuid;
    // System.Void .ctor(System.Int32 domainId)
    // Offset: 0x10593A0
    static CrossAppDomainData* New_ctor(int domainId);
    // System.Int32 get_DomainID()
    // Offset: 0x10598F4
    int get_DomainID();
    // System.String get_ProcessID()
    // Offset: 0x10598FC
    ::Il2CppString* get_ProcessID();
  }; // System.Runtime.Remoting.Channels.CrossAppDomainData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::CrossAppDomainData*, "System.Runtime.Remoting.Channels", "CrossAppDomainData");
#pragma pack(pop)