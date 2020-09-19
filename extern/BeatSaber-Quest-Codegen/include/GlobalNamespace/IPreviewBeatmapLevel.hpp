// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel {
    public:
    // public System.String get_levelID()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0xFFFFFFFF
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0xFFFFFFFF
    float get_songTimeOffset();
    // public System.Single get_shuffle()
    // Offset: 0xFFFFFFFF
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0xFFFFFFFF
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0xFFFFFFFF
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0xFFFFFFFF
    float get_previewDuration();
    // public System.Single get_songDuration()
    // Offset: 0xFFFFFFFF
    float get_songDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0xFFFFFFFF
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Texture2D> GetCoverImageTexture2DAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<UnityEngine::Texture2D*>* GetCoverImageTexture2DAsync(System::Threading::CancellationToken cancellationToken);
  }; // IPreviewBeatmapLevel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IPreviewBeatmapLevel*, "", "IPreviewBeatmapLevel");
#pragma pack(pop)
