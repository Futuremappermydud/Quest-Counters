// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Media
  class OVRPlugin::Media : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRPlugin::Media::MrcActivationMode
    struct MrcActivationMode;
    // Nested type: GlobalNamespace::OVRPlugin::Media::InputVideoBufferType
    struct InputVideoBufferType;
    // Get static field: static private UnityEngine.Texture2D cachedTexture
    static UnityEngine::Texture2D* _get_cachedTexture();
    // Set static field: static private UnityEngine.Texture2D cachedTexture
    static void _set_cachedTexture(UnityEngine::Texture2D* value);
    // static public System.Boolean Initialize()
    // Offset: 0xF02C34
    static bool Initialize();
    // static public System.Boolean Shutdown()
    // Offset: 0xF02D34
    static bool Shutdown();
    // static public System.Boolean GetInitialized()
    // Offset: 0xEED628
    static bool GetInitialized();
    // static public System.Boolean Update()
    // Offset: 0xF02E34
    static bool Update();
    // static public OVRPlugin/Media/MrcActivationMode GetMrcActivationMode()
    // Offset: 0xF02F34
    static GlobalNamespace::OVRPlugin::Media::MrcActivationMode GetMrcActivationMode();
    // static public System.Boolean SetMrcActivationMode(OVRPlugin/Media/MrcActivationMode mode)
    // Offset: 0xF03040
    static bool SetMrcActivationMode(GlobalNamespace::OVRPlugin::Media::MrcActivationMode mode);
    // static public System.Boolean IsMrcEnabled()
    // Offset: 0xF03148
    static bool IsMrcEnabled();
    // static public System.Boolean IsMrcActivated()
    // Offset: 0xF03258
    static bool IsMrcActivated();
    // static public System.Boolean UseMrcDebugCamera()
    // Offset: 0xEECB1C
    static bool UseMrcDebugCamera();
    // static public System.Boolean SetMrcInputVideoBufferType(OVRPlugin/Media/InputVideoBufferType videoBufferType)
    // Offset: 0xF03368
    static bool SetMrcInputVideoBufferType(GlobalNamespace::OVRPlugin::Media::InputVideoBufferType videoBufferType);
    // static public OVRPlugin/Media/InputVideoBufferType GetMrcInputVideoBufferType()
    // Offset: 0xF03470
    static GlobalNamespace::OVRPlugin::Media::InputVideoBufferType GetMrcInputVideoBufferType();
    // static public System.Boolean SetMrcFrameSize(System.Int32 frameWidth, System.Int32 frameHeight)
    // Offset: 0xF03578
    static bool SetMrcFrameSize(int frameWidth, int frameHeight);
    // static public System.Void GetMrcFrameSize(out System.Int32 frameWidth, out System.Int32 frameHeight)
    // Offset: 0xF03690
    static void GetMrcFrameSize(int& frameWidth, int& frameHeight);
    // static public System.Boolean SetMrcAudioSampleRate(System.Int32 sampleRate)
    // Offset: 0xF037B4
    static bool SetMrcAudioSampleRate(int sampleRate);
    // static public System.Int32 GetMrcAudioSampleRate()
    // Offset: 0xF038BC
    static int GetMrcAudioSampleRate();
    // static public System.Boolean SetMrcFrameImageFlipped(System.Boolean imageFlipped)
    // Offset: 0xF039C0
    static bool SetMrcFrameImageFlipped(bool imageFlipped);
    // static public System.Boolean GetMrcFrameImageFlipped()
    // Offset: 0xF03ACC
    static bool GetMrcFrameImageFlipped();
    // static public System.Boolean EncodeMrcFrame(System.IntPtr textureHandle, System.Single[] audioData, System.Int32 audioFrames, System.Int32 audioChannels, System.Double timestamp, ref System.Int32 outSyncId)
    // Offset: 0xF03BD8
    static bool EncodeMrcFrame(System::IntPtr textureHandle, ::Array<float>* audioData, int audioFrames, int audioChannels, double timestamp, int& outSyncId);
    // static public System.Boolean EncodeMrcFrame(UnityEngine.RenderTexture frame, System.Single[] audioData, System.Int32 audioFrames, System.Int32 audioChannels, System.Double timestamp, ref System.Int32 outSyncId)
    // Offset: 0xF03E14
    static bool EncodeMrcFrame(UnityEngine::RenderTexture* frame, ::Array<float>* audioData, int audioFrames, int audioChannels, double timestamp, int& outSyncId);
    // static public System.Boolean SyncMrcFrame(System.Int32 syncId)
    // Offset: 0xF04300
    static bool SyncMrcFrame(int syncId);
    // static private System.Void .cctor()
    // Offset: 0xF04410
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xF04408
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRPlugin::Media* New_ctor();
  }; // OVRPlugin/Media
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Media*, "", "OVRPlugin/Media");
#pragma pack(pop)