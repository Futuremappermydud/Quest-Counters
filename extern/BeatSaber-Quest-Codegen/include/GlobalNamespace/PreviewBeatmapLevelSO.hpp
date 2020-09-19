// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PreviewBeatmapLevelSO
  class PreviewBeatmapLevelSO : public GlobalNamespace::PersistentScriptableObject, public GlobalNamespace::IPreviewBeatmapLevel {
    public:
    // Nested type: GlobalNamespace::PreviewBeatmapLevelSO::$GetPreviewAudioClipAsync$d__51
    struct $GetPreviewAudioClipAsync$d__51;
    // Nested type: GlobalNamespace::PreviewBeatmapLevelSO::$GetCoverImageTexture2DAsync$d__52
    struct $GetCoverImageTexture2DAsync$d__52;
    // private System.String _levelID
    // Offset: 0x18
    ::Il2CppString* levelID;
    // private System.String _songName
    // Offset: 0x20
    ::Il2CppString* songName;
    // private System.String _songSubName
    // Offset: 0x28
    ::Il2CppString* songSubName;
    // private System.String _songAuthorName
    // Offset: 0x30
    ::Il2CppString* songAuthorName;
    // private System.String _levelAuthorName
    // Offset: 0x38
    ::Il2CppString* levelAuthorName;
    // private UnityEngine.AudioClip _previewAudioClip
    // Offset: 0x40
    UnityEngine::AudioClip* previewAudioClip;
    // private System.Single _beatsPerMinute
    // Offset: 0x48
    float beatsPerMinute;
    // private System.Single _songTimeOffset
    // Offset: 0x4C
    float songTimeOffset;
    // private System.Single _shuffle
    // Offset: 0x50
    float shuffle;
    // private System.Single _shufflePeriod
    // Offset: 0x54
    float shufflePeriod;
    // private System.Single _previewStartTime
    // Offset: 0x58
    float previewStartTime;
    // private System.Single _previewDuration
    // Offset: 0x5C
    float previewDuration;
    // private System.Single _songDuration
    // Offset: 0x60
    float songDuration;
    // private UnityEngine.Texture2D _coverImageTexture2D
    // Offset: 0x68
    UnityEngine::Texture2D* coverImageTexture2D;
    // private EnvironmentInfoSO _environmentInfo
    // Offset: 0x70
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // private EnvironmentInfoSO _allDirectionsEnvironmentInfo
    // Offset: 0x78
    GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;
    // private PreviewDifficultyBeatmapSet[] _previewDifficultyBeatmapSets
    // Offset: 0x80
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // public System.Boolean _ignore360MovementBeatmaps
    // Offset: 0x88
    bool ignore360MovementBeatmaps;
    // private PreviewDifficultyBeatmapSet[] _no360MovementPreviewDifficultyBeatmapSets
    // Offset: 0x90
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* no360MovementPreviewDifficultyBeatmapSets;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void InitData()
    // Offset: 0xC1E58C
    void InitData();
    // public System.String get_levelID()
    // Offset: 0xC1E4C8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelID()
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0xC1E4D0
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songName()
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0xC1E4D8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songSubName()
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0xC1E4E0
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songAuthorName()
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0xC1E4E8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelAuthorName()
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0xC1E4F0
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_beatsPerMinute()
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0xC1E4F8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songTimeOffset()
    float get_songTimeOffset();
    // public System.Single get_songDuration()
    // Offset: 0xC1E500
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songDuration()
    float get_songDuration();
    // public System.Single get_shuffle()
    // Offset: 0xC1E508
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shuffle()
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0xC1E510
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shufflePeriod()
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0xC1E518
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewStartTime()
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0xC1E520
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewDuration()
    float get_previewDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0xC1E528
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_environmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0xC1E530
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0xC1E538
    // Implemented from: IPreviewBeatmapLevel
    // Base method: PreviewDifficultyBeatmapSet[] IPreviewBeatmapLevel::get_previewDifficultyBeatmapSets()
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // protected override System.Void OnEnable()
    // Offset: 0xC1E554
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC1E6D0
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.AudioClip> IPreviewBeatmapLevel::GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Texture2D> GetCoverImageTexture2DAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC1E81C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.Texture2D> IPreviewBeatmapLevel::GetCoverImageTexture2DAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::Texture2D*>* GetCoverImageTexture2DAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0xC1E968
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PreviewBeatmapLevelSO* New_ctor();
  }; // PreviewBeatmapLevelSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewBeatmapLevelSO*, "", "PreviewBeatmapLevelSO");
#pragma pack(pop)
