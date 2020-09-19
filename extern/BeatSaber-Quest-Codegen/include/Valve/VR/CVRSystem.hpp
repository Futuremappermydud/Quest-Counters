// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: DistortionCoordinates_t
  struct DistortionCoordinates_t;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
  // Forward declaring type: ETextureType
  struct ETextureType;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
  // Forward declaring type: ETrackedDeviceClass
  struct ETrackedDeviceClass;
  // Forward declaring type: EDeviceActivityLevel
  struct EDeviceActivityLevel;
  // Forward declaring type: ETrackedControllerRole
  struct ETrackedControllerRole;
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: EVREventType
  struct EVREventType;
  // Forward declaring type: HiddenAreaMesh_t
  struct HiddenAreaMesh_t;
  // Forward declaring type: EHiddenAreaMeshType
  struct EHiddenAreaMeshType;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
  // Forward declaring type: EVRButtonId
  struct EVRButtonId;
  // Forward declaring type: EVRControllerAxisType
  struct EVRControllerAxisType;
  // Forward declaring type: EVRFirmwareError
  struct EVRFirmwareError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRSystem
  class CVRSystem : public ::Il2CppObject {
    public:
    // Nested type: Valve::VR::CVRSystem::_PollNextEventPacked
    class _PollNextEventPacked;
    // Nested type: Valve::VR::CVRSystem::PollNextEventUnion
    struct PollNextEventUnion;
    // Nested type: Valve::VR::CVRSystem::_GetControllerStatePacked
    class _GetControllerStatePacked;
    // Nested type: Valve::VR::CVRSystem::GetControllerStateUnion
    struct GetControllerStateUnion;
    // Nested type: Valve::VR::CVRSystem::_GetControllerStateWithPosePacked
    class _GetControllerStateWithPosePacked;
    // Nested type: Valve::VR::CVRSystem::GetControllerStateWithPoseUnion
    struct GetControllerStateWithPoseUnion;
    // private Valve.VR.IVRSystem FnTable
    // Offset: 0x10
    Valve::VR::IVRSystem FnTable;
    // Creating conversion operator: operator Valve::VR::IVRSystem
    constexpr operator Valve::VR::IVRSystem() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFE7DE8
    static CVRSystem* New_ctor(System::IntPtr pInterface);
    // public System.Void GetRecommendedRenderTargetSize(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0xFE7EFC
    void GetRecommendedRenderTargetSize(uint& pnWidth, uint& pnHeight);
    // public Valve.VR.HmdMatrix44_t GetProjectionMatrix(Valve.VR.EVREye eEye, System.Single fNearZ, System.Single fFarZ)
    // Offset: 0xFE7F20
    Valve::VR::HmdMatrix44_t GetProjectionMatrix(Valve::VR::EVREye eEye, float fNearZ, float fFarZ);
    // public System.Void GetProjectionRaw(Valve.VR.EVREye eEye, ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom)
    // Offset: 0xFE7F3C
    void GetProjectionRaw(Valve::VR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom);
    // public System.Boolean ComputeDistortion(Valve.VR.EVREye eEye, System.Single fU, System.Single fV, ref Valve.VR.DistortionCoordinates_t pDistortionCoordinates)
    // Offset: 0xFE7F68
    bool ComputeDistortion(Valve::VR::EVREye eEye, float fU, float fV, Valve::VR::DistortionCoordinates_t& pDistortionCoordinates);
    // public Valve.VR.HmdMatrix34_t GetEyeToHeadTransform(Valve.VR.EVREye eEye)
    // Offset: 0xFE7F84
    Valve::VR::HmdMatrix34_t GetEyeToHeadTransform(Valve::VR::EVREye eEye);
    // public System.Boolean GetTimeSinceLastVsync(ref System.Single pfSecondsSinceLastVsync, ref System.UInt64 pulFrameCounter)
    // Offset: 0xFE7FA0
    bool GetTimeSinceLastVsync(float& pfSecondsSinceLastVsync, uint64_t& pulFrameCounter);
    // public System.Int32 GetD3D9AdapterIndex()
    // Offset: 0xFE7FC4
    int GetD3D9AdapterIndex();
    // public System.Void GetDXGIOutputInfo(ref System.Int32 pnAdapterIndex)
    // Offset: 0xFE7FE0
    void GetDXGIOutputInfo(int& pnAdapterIndex);
    // public System.Void GetOutputDevice(ref System.UInt64 pnDevice, Valve.VR.ETextureType textureType, System.IntPtr pInstance)
    // Offset: 0xFE8000
    void GetOutputDevice(uint64_t& pnDevice, Valve::VR::ETextureType textureType, System::IntPtr pInstance);
    // public System.Boolean IsDisplayOnDesktop()
    // Offset: 0xFE8020
    bool IsDisplayOnDesktop();
    // public System.Boolean SetDisplayVisibility(System.Boolean bIsVisibleOnDesktop)
    // Offset: 0xFE803C
    bool SetDisplayVisibility(bool bIsVisibleOnDesktop);
    // public System.Void GetDeviceToAbsoluteTrackingPose(Valve.VR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsToPhotonsFromNow, Valve.VR.TrackedDevicePose_t[] pTrackedDevicePoseArray)
    // Offset: 0xFE805C
    void GetDeviceToAbsoluteTrackingPose(Valve::VR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, ::Array<Valve::VR::TrackedDevicePose_t>* pTrackedDevicePoseArray);
    // public System.Void ResetSeatedZeroPose()
    // Offset: 0xFE8084
    void ResetSeatedZeroPose();
    // public Valve.VR.HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose()
    // Offset: 0xFE80A0
    Valve::VR::HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
    // public Valve.VR.HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose()
    // Offset: 0xFE80BC
    Valve::VR::HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose();
    // public System.UInt32 GetSortedTrackedDeviceIndicesOfClass(Valve.VR.ETrackedDeviceClass eTrackedDeviceClass, System.UInt32[] punTrackedDeviceIndexArray, System.UInt32 unRelativeToTrackedDeviceIndex)
    // Offset: 0xFE80D8
    uint GetSortedTrackedDeviceIndicesOfClass(Valve::VR::ETrackedDeviceClass eTrackedDeviceClass, ::Array<uint>* punTrackedDeviceIndexArray, uint unRelativeToTrackedDeviceIndex);
    // public Valve.VR.EDeviceActivityLevel GetTrackedDeviceActivityLevel(System.UInt32 unDeviceId)
    // Offset: 0xFE8104
    Valve::VR::EDeviceActivityLevel GetTrackedDeviceActivityLevel(uint unDeviceId);
    // public System.Void ApplyTransform(ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, ref Valve.VR.HmdMatrix34_t pTransform)
    // Offset: 0xFE8120
    void ApplyTransform(Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, Valve::VR::HmdMatrix34_t& pTransform);
    // public System.UInt32 GetTrackedDeviceIndexForControllerRole(Valve.VR.ETrackedControllerRole unDeviceType)
    // Offset: 0xFE813C
    uint GetTrackedDeviceIndexForControllerRole(Valve::VR::ETrackedControllerRole unDeviceType);
    // public Valve.VR.ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(System.UInt32 unDeviceIndex)
    // Offset: 0xFE8158
    Valve::VR::ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(uint unDeviceIndex);
    // public Valve.VR.ETrackedDeviceClass GetTrackedDeviceClass(System.UInt32 unDeviceIndex)
    // Offset: 0xFE8174
    Valve::VR::ETrackedDeviceClass GetTrackedDeviceClass(uint unDeviceIndex);
    // public System.Boolean IsTrackedDeviceConnected(System.UInt32 unDeviceIndex)
    // Offset: 0xFE8190
    bool IsTrackedDeviceConnected(uint unDeviceIndex);
    // public System.Boolean GetBoolTrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0xFE81AC
    bool GetBoolTrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.Single GetFloatTrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0xFE81C8
    float GetFloatTrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.Int32 GetInt32TrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0xFE81E4
    int GetInt32TrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.UInt64 GetUint64TrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0xFE8200
    uint64_t GetUint64TrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public Valve.VR.HmdMatrix34_t GetMatrix34TrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0xFE821C
    Valve::VR::HmdMatrix34_t GetMatrix34TrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.UInt32 GetArrayTrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, System.UInt32 propType, System.IntPtr pBuffer, System.UInt32 unBufferSize, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0xFE8238
    uint GetArrayTrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, Valve::VR::ETrackedPropertyError& pError);
    // public System.UInt32 GetStringTrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0xFE8254
    uint GetStringTrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, System::Text::StringBuilder* pchValue, uint unBufferSize, Valve::VR::ETrackedPropertyError& pError);
    // public System.String GetPropErrorNameFromEnum(Valve.VR.ETrackedPropertyError error)
    // Offset: 0xFE8270
    ::Il2CppString* GetPropErrorNameFromEnum(Valve::VR::ETrackedPropertyError error);
    // public System.Boolean PollNextEvent(ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent)
    // Offset: 0xFE8304
    bool PollNextEvent(Valve::VR::VREvent_t& pEvent, uint uncbVREvent);
    // public System.Boolean PollNextEventWithPose(Valve.VR.ETrackingUniverseOrigin eOrigin, ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0xFE8710
    bool PollNextEventWithPose(Valve::VR::ETrackingUniverseOrigin eOrigin, Valve::VR::VREvent_t& pEvent, uint uncbVREvent, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.String GetEventTypeNameFromEnum(Valve.VR.EVREventType eType)
    // Offset: 0xFE872C
    ::Il2CppString* GetEventTypeNameFromEnum(Valve::VR::EVREventType eType);
    // public Valve.VR.HiddenAreaMesh_t GetHiddenAreaMesh(Valve.VR.EVREye eEye, Valve.VR.EHiddenAreaMeshType type)
    // Offset: 0xFE87C0
    Valve::VR::HiddenAreaMesh_t GetHiddenAreaMesh(Valve::VR::EVREye eEye, Valve::VR::EHiddenAreaMeshType type);
    // public System.Boolean GetControllerState(System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize)
    // Offset: 0xFE87DC
    bool GetControllerState(uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize);
    // public System.Boolean GetControllerStateWithPose(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0xFE8C40
    bool GetControllerStateWithPose(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.Void TriggerHapticPulse(System.UInt32 unControllerDeviceIndex, System.UInt32 unAxisId, System.Char usDurationMicroSec)
    // Offset: 0xFE90FC
    void TriggerHapticPulse(uint unControllerDeviceIndex, uint unAxisId, ::Il2CppChar usDurationMicroSec);
    // public System.String GetButtonIdNameFromEnum(Valve.VR.EVRButtonId eButtonId)
    // Offset: 0xFE9118
    ::Il2CppString* GetButtonIdNameFromEnum(Valve::VR::EVRButtonId eButtonId);
    // public System.String GetControllerAxisTypeNameFromEnum(Valve.VR.EVRControllerAxisType eAxisType)
    // Offset: 0xFE91AC
    ::Il2CppString* GetControllerAxisTypeNameFromEnum(Valve::VR::EVRControllerAxisType eAxisType);
    // public System.Boolean IsInputAvailable()
    // Offset: 0xFE9240
    bool IsInputAvailable();
    // public System.Boolean IsSteamVRDrawingControllers()
    // Offset: 0xFE925C
    bool IsSteamVRDrawingControllers();
    // public System.Boolean ShouldApplicationPause()
    // Offset: 0xFE9278
    bool ShouldApplicationPause();
    // public System.Boolean ShouldApplicationReduceRenderingWork()
    // Offset: 0xFE9294
    bool ShouldApplicationReduceRenderingWork();
    // public System.UInt32 DriverDebugRequest(System.UInt32 unDeviceIndex, System.String pchRequest, System.Text.StringBuilder pchResponseBuffer, System.UInt32 unResponseBufferSize)
    // Offset: 0xFE92B0
    uint DriverDebugRequest(uint unDeviceIndex, ::Il2CppString* pchRequest, System::Text::StringBuilder* pchResponseBuffer, uint unResponseBufferSize);
    // public Valve.VR.EVRFirmwareError PerformFirmwareUpdate(System.UInt32 unDeviceIndex)
    // Offset: 0xFE92CC
    Valve::VR::EVRFirmwareError PerformFirmwareUpdate(uint unDeviceIndex);
    // public System.Void AcknowledgeQuit_Exiting()
    // Offset: 0xFE92E8
    void AcknowledgeQuit_Exiting();
    // public System.Void AcknowledgeQuit_UserPrompt()
    // Offset: 0xFE9304
    void AcknowledgeQuit_UserPrompt();
  }; // Valve.VR.CVRSystem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem*, "Valve.VR", "CVRSystem");
#pragma pack(pop)