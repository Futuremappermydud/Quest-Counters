// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Events/Action
  class SteamVR_Events::Action : public ::Il2CppObject {
    public:
    // public System.Void Enable(System.Boolean enabled)
    // Offset: 0xFFFFFFFF
    void Enable(bool enabled);
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0xD82994
    void set_enabled(bool value);
    // protected System.Void .ctor()
    // Offset: 0xD842DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SteamVR_Events::Action* New_ctor();
  }; // SteamVR_Events/Action
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Events::Action*, "", "SteamVR_Events/Action");
#pragma pack(pop)