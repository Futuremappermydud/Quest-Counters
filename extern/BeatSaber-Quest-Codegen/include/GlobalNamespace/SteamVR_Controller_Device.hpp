// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_Controller
#include "GlobalNamespace/SteamVR_Controller.hpp"
// Including type: Valve.VR.VRControllerState_t
#include "Valve/VR/VRControllerState_t.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRButtonId
  struct EVRButtonId;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Controller/Device
  class SteamVR_Controller::Device : public ::Il2CppObject {
    public:
    // private System.UInt32 <index>k__BackingField
    // Offset: 0x10
    uint index;
    // private System.Boolean <valid>k__BackingField
    // Offset: 0x14
    bool valid;
    // private Valve.VR.VRControllerState_t state
    // Offset: 0x18
    Valve::VR::VRControllerState_t state;
    // private Valve.VR.VRControllerState_t prevState
    // Offset: 0x58
    Valve::VR::VRControllerState_t prevState;
    // private Valve.VR.TrackedDevicePose_t pose
    // Offset: 0x98
    Valve::VR::TrackedDevicePose_t pose;
    // private System.Int32 prevFrameCount
    // Offset: 0xE8
    int prevFrameCount;
    // public System.Single hairTriggerDelta
    // Offset: 0xEC
    float hairTriggerDelta;
    // private System.Single hairTriggerLimit
    // Offset: 0xF0
    float hairTriggerLimit;
    // private System.Boolean hairTriggerState
    // Offset: 0xF4
    bool hairTriggerState;
    // private System.Boolean hairTriggerPrevState
    // Offset: 0xF5
    bool hairTriggerPrevState;
    // public System.Void .ctor(System.UInt32 i)
    // Offset: 0xD80E98
    static SteamVR_Controller::Device* New_ctor(uint i);
    // public System.UInt32 get_index()
    // Offset: 0xD81480
    uint get_index();
    // private System.Void set_index(System.UInt32 value)
    // Offset: 0xD81488
    void set_index(uint value);
    // public System.Boolean get_valid()
    // Offset: 0xD81490
    bool get_valid();
    // private System.Void set_valid(System.Boolean value)
    // Offset: 0xD81498
    void set_valid(bool value);
    // public System.Boolean get_connected()
    // Offset: 0xD8144C
    bool get_connected();
    // public System.Boolean get_hasTracking()
    // Offset: 0xD814A4
    bool get_hasTracking();
    // public System.Boolean get_outOfRange()
    // Offset: 0xD814C8
    bool get_outOfRange();
    // public System.Boolean get_calibrating()
    // Offset: 0xD81500
    bool get_calibrating();
    // public System.Boolean get_uninitialized()
    // Offset: 0xD81530
    bool get_uninitialized();
    // public SteamVR_Utils/RigidTransform get_transform()
    // Offset: 0xD813F0
    GlobalNamespace::SteamVR_Utils::RigidTransform get_transform();
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0xD8155C
    UnityEngine::Vector3 get_velocity();
    // public UnityEngine.Vector3 get_angularVelocity()
    // Offset: 0xD815AC
    UnityEngine::Vector3 get_angularVelocity();
    // public Valve.VR.VRControllerState_t GetState()
    // Offset: 0xD81600
    Valve::VR::VRControllerState_t GetState();
    // public Valve.VR.VRControllerState_t GetPrevState()
    // Offset: 0xD8163C
    Valve::VR::VRControllerState_t GetPrevState();
    // public Valve.VR.TrackedDevicePose_t GetPose()
    // Offset: 0xD81678
    Valve::VR::TrackedDevicePose_t GetPose();
    // public System.Void Update()
    // Offset: 0xD80F0C
    void Update();
    // public System.Boolean GetPress(System.UInt64 buttonMask)
    // Offset: 0xD818F8
    bool GetPress(uint64_t buttonMask);
    // public System.Boolean GetPressDown(System.UInt64 buttonMask)
    // Offset: 0xD81928
    bool GetPressDown(uint64_t buttonMask);
    // public System.Boolean GetPressUp(System.UInt64 buttonMask)
    // Offset: 0xD8196C
    bool GetPressUp(uint64_t buttonMask);
    // public System.Boolean GetPress(Valve.VR.EVRButtonId buttonId)
    // Offset: 0xD819B0
    bool GetPress(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetPressDown(Valve.VR.EVRButtonId buttonId)
    // Offset: 0xD819E4
    bool GetPressDown(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetPressUp(Valve.VR.EVRButtonId buttonId)
    // Offset: 0xD81A2C
    bool GetPressUp(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetTouch(System.UInt64 buttonMask)
    // Offset: 0xD81A74
    bool GetTouch(uint64_t buttonMask);
    // public System.Boolean GetTouchDown(System.UInt64 buttonMask)
    // Offset: 0xD81AA4
    bool GetTouchDown(uint64_t buttonMask);
    // public System.Boolean GetTouchUp(System.UInt64 buttonMask)
    // Offset: 0xD81AE8
    bool GetTouchUp(uint64_t buttonMask);
    // public System.Boolean GetTouch(Valve.VR.EVRButtonId buttonId)
    // Offset: 0xD81B2C
    bool GetTouch(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetTouchDown(Valve.VR.EVRButtonId buttonId)
    // Offset: 0xD81B60
    bool GetTouchDown(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetTouchUp(Valve.VR.EVRButtonId buttonId)
    // Offset: 0xD81BA8
    bool GetTouchUp(Valve::VR::EVRButtonId buttonId);
    // public UnityEngine.Vector2 GetAxis(Valve.VR.EVRButtonId buttonId)
    // Offset: 0xD81BF0
    UnityEngine::Vector2 GetAxis(Valve::VR::EVRButtonId buttonId);
    // public System.Void TriggerHapticPulse(System.UInt16 durationMicroSec, Valve.VR.EVRButtonId buttonId)
    // Offset: 0xD81CCC
    void TriggerHapticPulse(uint16_t durationMicroSec, Valve::VR::EVRButtonId buttonId);
    // private System.Void UpdateHairTrigger()
    // Offset: 0xD817F8
    void UpdateHairTrigger();
    // public System.Boolean GetHairTrigger()
    // Offset: 0xD81D68
    bool GetHairTrigger();
    // public System.Boolean GetHairTriggerDown()
    // Offset: 0xD81D8C
    bool GetHairTriggerDown();
    // public System.Boolean GetHairTriggerUp()
    // Offset: 0xD81DC8
    bool GetHairTriggerUp();
  }; // SteamVR_Controller/Device
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Controller::Device*, "", "SteamVR_Controller/Device");
#pragma pack(pop)