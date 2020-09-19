// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioDataLoadState
  struct AudioDataLoadState;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioClip
  class AudioClip : public UnityEngine::Object {
    public:
    // Nested type: UnityEngine::AudioClip::PCMReaderCallback
    class PCMReaderCallback;
    // Nested type: UnityEngine::AudioClip::PCMSetPositionCallback
    class PCMSetPositionCallback;
    // private UnityEngine.AudioClip/PCMReaderCallback m_PCMReaderCallback
    // Offset: 0x18
    UnityEngine::AudioClip::PCMReaderCallback* m_PCMReaderCallback;
    // private UnityEngine.AudioClip/PCMSetPositionCallback m_PCMSetPositionCallback
    // Offset: 0x20
    UnityEngine::AudioClip::PCMSetPositionCallback* m_PCMSetPositionCallback;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static private System.Boolean GetData(UnityEngine.AudioClip clip, out System.Single[] data, System.Int32 numSamples, System.Int32 samplesOffset)
    // Offset: 0x195D22C
    static bool GetData(UnityEngine::AudioClip* clip, ::Array<float>*& data, int numSamples, int samplesOffset);
    // static private System.Boolean SetData(UnityEngine.AudioClip clip, System.Single[] data, System.Int32 numsamples, System.Int32 samplesOffset)
    // Offset: 0x195D294
    static bool SetData(UnityEngine::AudioClip* clip, ::Array<float>* data, int numsamples, int samplesOffset);
    // static private UnityEngine.AudioClip Construct_Internal()
    // Offset: 0x195D2FC
    static UnityEngine::AudioClip* Construct_Internal();
    // private System.String GetName()
    // Offset: 0x195D330
    ::Il2CppString* GetName();
    // private System.Void CreateUserSound(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x195D370
    void CreateUserSound(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream);
    // public System.Single get_length()
    // Offset: 0x195C0DC
    float get_length();
    // public System.Int32 get_samples()
    // Offset: 0x195D3F0
    int get_samples();
    // public System.Int32 get_channels()
    // Offset: 0x195D430
    int get_channels();
    // public System.Int32 get_frequency()
    // Offset: 0x195D470
    int get_frequency();
    // public System.Boolean LoadAudioData()
    // Offset: 0x195D4B0
    bool LoadAudioData();
    // public UnityEngine.AudioDataLoadState get_loadState()
    // Offset: 0x195D4F0
    UnityEngine::AudioDataLoadState get_loadState();
    // public System.Boolean GetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x195D530
    bool GetData(::Array<float>* data, int offsetSamples);
    // public System.Boolean SetData(System.Single[] data, System.Int32 offsetSamples)
    // Offset: 0x195D6BC
    bool SetData(::Array<float>* data, int offsetSamples);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream)
    // Offset: 0x195D8D4
    static UnityEngine::AudioClip* Create(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream);
    // static public UnityEngine.AudioClip Create(System.String name, System.Int32 lengthSamples, System.Int32 channels, System.Int32 frequency, System.Boolean stream, UnityEngine.AudioClip/PCMReaderCallback pcmreadercallback, UnityEngine.AudioClip/PCMSetPositionCallback pcmsetpositioncallback)
    // Offset: 0x195D8E4
    static UnityEngine::AudioClip* Create(::Il2CppString* name, int lengthSamples, int channels, int frequency, bool stream, UnityEngine::AudioClip::PCMReaderCallback* pcmreadercallback, UnityEngine::AudioClip::PCMSetPositionCallback* pcmsetpositioncallback);
    // private System.Void add_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback value)
    // Offset: 0x195DAA0
    void add_m_PCMReaderCallback(UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void remove_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback value)
    // Offset: 0x195DBE8
    void remove_m_PCMReaderCallback(UnityEngine::AudioClip::PCMReaderCallback* value);
    // private System.Void add_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback value)
    // Offset: 0x195DB44
    void add_m_PCMSetPositionCallback(UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // private System.Void remove_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback value)
    // Offset: 0x195DC8C
    void remove_m_PCMSetPositionCallback(UnityEngine::AudioClip::PCMSetPositionCallback* value);
    // private System.Void InvokePCMReaderCallback_Internal(System.Single[] data)
    // Offset: 0x195DD30
    void InvokePCMReaderCallback_Internal(::Array<float>* data);
    // private System.Void InvokePCMSetPositionCallback_Internal(System.Int32 position)
    // Offset: 0x195E0F8
    void InvokePCMSetPositionCallback_Internal(int position);
    // private System.Void .ctor()
    // Offset: 0x195D1A4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioClip* New_ctor();
  }; // UnityEngine.AudioClip
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioClip*, "UnityEngine", "AudioClip");
#pragma pack(pop)