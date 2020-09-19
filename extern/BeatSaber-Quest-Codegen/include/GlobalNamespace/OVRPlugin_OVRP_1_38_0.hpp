// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/Media
#include "GlobalNamespace/OVRPlugin_Media.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/OVRP_1_38_0
  class OVRPlugin::OVRP_1_38_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_GetTrackingTransformRelativePose(ref OVRPlugin/Posef trackingTransformRelativePose, OVRPlugin/TrackingOrigin trackingOrigin)
    // Offset: 0xF48104
    static GlobalNamespace::OVRPlugin::Result ovrp_GetTrackingTransformRelativePose(GlobalNamespace::OVRPlugin::Posef& trackingTransformRelativePose, GlobalNamespace::OVRPlugin::TrackingOrigin trackingOrigin);
    // static public OVRPlugin/Result ovrp_Media_Initialize()
    // Offset: 0xF48194
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_Initialize();
    // static public OVRPlugin/Result ovrp_Media_Shutdown()
    // Offset: 0xF48208
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_Shutdown();
    // static public OVRPlugin/Result ovrp_Media_GetInitialized(out OVRPlugin/Bool initialized)
    // Offset: 0xF4827C
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetInitialized(GlobalNamespace::OVRPlugin::Bool& initialized);
    // static public OVRPlugin/Result ovrp_Media_Update()
    // Offset: 0xF482FC
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_Update();
    // static public OVRPlugin/Result ovrp_Media_GetMrcActivationMode(out OVRPlugin/Media/MrcActivationMode activationMode)
    // Offset: 0xF48370
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetMrcActivationMode(GlobalNamespace::OVRPlugin::Media::MrcActivationMode& activationMode);
    // static public OVRPlugin/Result ovrp_Media_SetMrcActivationMode(OVRPlugin/Media/MrcActivationMode activationMode)
    // Offset: 0xF483F0
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SetMrcActivationMode(GlobalNamespace::OVRPlugin::Media::MrcActivationMode activationMode);
    // static public OVRPlugin/Result ovrp_Media_IsMrcEnabled(out OVRPlugin/Bool mrcEnabled)
    // Offset: 0xF48470
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_IsMrcEnabled(GlobalNamespace::OVRPlugin::Bool& mrcEnabled);
    // static public OVRPlugin/Result ovrp_Media_IsMrcActivated(out OVRPlugin/Bool mrcActivated)
    // Offset: 0xF484F0
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_IsMrcActivated(GlobalNamespace::OVRPlugin::Bool& mrcActivated);
    // static public OVRPlugin/Result ovrp_Media_UseMrcDebugCamera(out OVRPlugin/Bool useMrcDebugCamera)
    // Offset: 0xF48570
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_UseMrcDebugCamera(GlobalNamespace::OVRPlugin::Bool& useMrcDebugCamera);
    // static public OVRPlugin/Result ovrp_Media_SetMrcInputVideoBufferType(OVRPlugin/Media/InputVideoBufferType inputVideoBufferType)
    // Offset: 0xF485F0
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SetMrcInputVideoBufferType(GlobalNamespace::OVRPlugin::Media::InputVideoBufferType inputVideoBufferType);
    // static public OVRPlugin/Result ovrp_Media_GetMrcInputVideoBufferType(ref OVRPlugin/Media/InputVideoBufferType inputVideoBufferType)
    // Offset: 0xF48670
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetMrcInputVideoBufferType(GlobalNamespace::OVRPlugin::Media::InputVideoBufferType& inputVideoBufferType);
    // static public OVRPlugin/Result ovrp_Media_SetMrcFrameSize(System.Int32 frameWidth, System.Int32 frameHeight)
    // Offset: 0xF486F0
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SetMrcFrameSize(int frameWidth, int frameHeight);
    // static public OVRPlugin/Result ovrp_Media_GetMrcFrameSize(ref System.Int32 frameWidth, ref System.Int32 frameHeight)
    // Offset: 0xF48780
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetMrcFrameSize(int& frameWidth, int& frameHeight);
    // static public OVRPlugin/Result ovrp_Media_SetMrcAudioSampleRate(System.Int32 sampleRate)
    // Offset: 0xF48810
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SetMrcAudioSampleRate(int sampleRate);
    // static public OVRPlugin/Result ovrp_Media_GetMrcAudioSampleRate(ref System.Int32 sampleRate)
    // Offset: 0xF48890
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetMrcAudioSampleRate(int& sampleRate);
    // static public OVRPlugin/Result ovrp_Media_SetMrcFrameImageFlipped(OVRPlugin/Bool flipped)
    // Offset: 0xF48910
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SetMrcFrameImageFlipped(GlobalNamespace::OVRPlugin::Bool flipped);
    // static public OVRPlugin/Result ovrp_Media_GetMrcFrameImageFlipped(ref OVRPlugin/Bool flipped)
    // Offset: 0xF48990
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetMrcFrameImageFlipped(GlobalNamespace::OVRPlugin::Bool& flipped);
    // static public OVRPlugin/Result ovrp_Media_EncodeMrcFrame(System.IntPtr rawBuffer, System.IntPtr audioDataPtr, System.Int32 audioDataLen, System.Int32 audioChannels, System.Double timestamp, ref System.Int32 outSyncId)
    // Offset: 0xF48A10
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_EncodeMrcFrame(System::IntPtr rawBuffer, System::IntPtr audioDataPtr, int audioDataLen, int audioChannels, double timestamp, int& outSyncId);
    // static public OVRPlugin/Result ovrp_Media_EncodeMrcFrameWithDualTextures(System.IntPtr backgroundTextureHandle, System.IntPtr foregroundTextureHandle, System.IntPtr audioData, System.Int32 audioDataLen, System.Int32 audioChannels, System.Double timestamp, ref System.Int32 outSyncId)
    // Offset: 0xF48AD0
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_EncodeMrcFrameWithDualTextures(System::IntPtr backgroundTextureHandle, System::IntPtr foregroundTextureHandle, System::IntPtr audioData, int audioDataLen, int audioChannels, double timestamp, int& outSyncId);
    // static public OVRPlugin/Result ovrp_Media_SyncMrcFrame(System.Int32 syncId)
    // Offset: 0xF48BA0
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SyncMrcFrame(int syncId);
    // static public OVRPlugin/Result ovrp_GetExternalCameraCalibrationRawPose(System.Int32 cameraId, out OVRPlugin/Posef rawPose)
    // Offset: 0xF48C20
    static GlobalNamespace::OVRPlugin::Result ovrp_GetExternalCameraCalibrationRawPose(int cameraId, GlobalNamespace::OVRPlugin::Posef& rawPose);
    // static public OVRPlugin/Result ovrp_SetDeveloperMode(OVRPlugin/Bool active)
    // Offset: 0xF48CB0
    static GlobalNamespace::OVRPlugin::Result ovrp_SetDeveloperMode(GlobalNamespace::OVRPlugin::Bool active);
    // static public OVRPlugin/Result ovrp_GetNodeOrientationValid(OVRPlugin/Node nodeId, ref OVRPlugin/Bool nodeOrientationValid)
    // Offset: 0xF48D30
    static GlobalNamespace::OVRPlugin::Result ovrp_GetNodeOrientationValid(GlobalNamespace::OVRPlugin::Node nodeId, GlobalNamespace::OVRPlugin::Bool& nodeOrientationValid);
    // static public OVRPlugin/Result ovrp_GetNodePositionValid(OVRPlugin/Node nodeId, ref OVRPlugin/Bool nodePositionValid)
    // Offset: 0xF48DC0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetNodePositionValid(GlobalNamespace::OVRPlugin::Node nodeId, GlobalNamespace::OVRPlugin::Bool& nodePositionValid);
    // static private System.Void .cctor()
    // Offset: 0xF48E50
    static void _cctor();
  }; // OVRPlugin/OVRP_1_38_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_38_0*, "", "OVRPlugin/OVRP_1_38_0");
#pragma pack(pop)