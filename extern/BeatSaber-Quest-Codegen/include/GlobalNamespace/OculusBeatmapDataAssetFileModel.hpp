// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapDataAssetFileModel
#include "GlobalNamespace/IBeatmapDataAssetFileModel.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusLevelProductsModelSO
  class OculusLevelProductsModelSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetFileDownloadUpdate
  class AssetFileDownloadUpdate;
  // Forward declaring type: AssetDetails
  class AssetDetails;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusBeatmapDataAssetFileModel
  class OculusBeatmapDataAssetFileModel : public ::Il2CppObject, public GlobalNamespace::IBeatmapDataAssetFileModel {
    public:
    // Nested type: GlobalNamespace::OculusBeatmapDataAssetFileModel::LevelDownloadingData
    class LevelDownloadingData;
    // Nested type: GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Nested type: GlobalNamespace::OculusBeatmapDataAssetFileModel::$TryDeleteAssetBundleFileForPreviewLevelAsync$d__13
    struct $TryDeleteAssetBundleFileForPreviewLevelAsync$d__13;
    // Nested type: GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__14
    struct $GetAssetBundleFileForPreviewLevelAsync$d__14;
    // Nested type: GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // Nested type: GlobalNamespace::OculusBeatmapDataAssetFileModel::$ReloadAssetDetailsForAllLevelsAsync$d__15
    struct $ReloadAssetDetailsForAllLevelsAsync$d__15;
    // Nested type: GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass16_0
    class $$c__DisplayClass16_0;
    // Nested type: GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16
    struct $GetDownloadAssetBundleFileAsync$d__16;
    // private System.Action`1<LevelDataAssetDownloadUpdate> levelDataAssetDownloadUpdateEvent
    // Offset: 0x10
    System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;
    // private System.Collections.Generic.Dictionary`2<System.UInt64,OculusBeatmapDataAssetFileModel/LevelDownloadingData> _assetIdToDownloadinData
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<uint64_t, GlobalNamespace::OculusBeatmapDataAssetFileModel::LevelDownloadingData*>* assetIdToDownloadinData;
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> _downloadedAssetBundleFiles
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* downloadedAssetBundleFiles;
    // private System.Collections.Generic.Dictionary`2<System.UInt64,Oculus.Platform.Models.AssetFileDownloadUpdate> _lastAssetFileDownloadUpdateForAssetIds
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<uint64_t, Oculus::Platform::Models::AssetFileDownloadUpdate*>* lastAssetFileDownloadUpdateForAssetIds;
    // private System.Single _lastAssetFileDownloadUpdateTime
    // Offset: 0x30
    float lastAssetFileDownloadUpdateTime;
    // private System.Threading.SemaphoreSlim _semaphoreSlim
    // Offset: 0x38
    System::Threading::SemaphoreSlim* semaphoreSlim;
    // private System.Collections.Generic.Dictionary`2<System.String,Oculus.Platform.Models.AssetDetails> _assetFileToAssetDetails
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<::Il2CppString*, Oculus::Platform::Models::AssetDetails*>* assetFileToAssetDetails;
    // private OculusLevelProductsModelSO _oculusLevelProductsModel
    // Offset: 0x48
    GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProductsModel;
    // static field const value: static private System.Single kMaxTimeOutBeforeFail
    static constexpr const float kMaxTimeOutBeforeFail = 120;
    // Get static field: static private System.Single kMaxTimeOutBeforeFail
    static float _get_kMaxTimeOutBeforeFail();
    // Set static field: static private System.Single kMaxTimeOutBeforeFail
    static void _set_kMaxTimeOutBeforeFail(float value);
    // public System.Void .ctor(OculusLevelProductsModelSO oculusLevelProductsModel)
    // Offset: 0xC35F48
    static OculusBeatmapDataAssetFileModel* New_ctor(GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProductsModel);
    // private System.Threading.Tasks.Task`1<System.Boolean> ReloadAssetDetailsForAllLevelsAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC36398
    System::Threading::Tasks::Task_1<bool>* ReloadAssetDetailsForAllLevelsAsync(System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<GetAssetBundleFileResult> GetDownloadAssetBundleFileAsync(System.String levelId, Oculus.Platform.Models.AssetDetails assetDetails, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC364E4
    System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* GetDownloadAssetBundleFileAsync(::Il2CppString* levelId, Oculus::Platform::Models::AssetDetails* assetDetails, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.TaskCompletionSource`1<GetAssetBundleFileResult> GetTaskCompletionSourceForDownload(System.String levelId, Oculus.Platform.Models.AssetDetails assetDetail)
    // Offset: 0xC36648
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>* GetTaskCompletionSourceForDownload(::Il2CppString* levelId, Oculus::Platform::Models::AssetDetails* assetDetail);
    // private System.Void HandleAssetFileDownloadUpdate(Oculus.Platform.Message`1<Oculus.Platform.Models.AssetFileDownloadUpdate> msg)
    // Offset: 0xC367EC
    void HandleAssetFileDownloadUpdate(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg);
    // private System.Void <.ctor>b__12_0(Oculus.Platform.Message`1<Oculus.Platform.Models.AssetFileDownloadUpdate> msg)
    // Offset: 0xC36B70
    void $_ctor$b__12_0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg);
    // public System.Void add_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0xC35E00
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Void IBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    void add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Void remove_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0xC35EA4
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Void IBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    void remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Threading.Tasks.Task`1<System.Boolean> TryDeleteAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC360F0
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Threading.Tasks.Task`1<System.Boolean> IBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<GetAssetBundleFileResult> GetAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC36244
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Threading.Tasks.Task`1<GetAssetBundleFileResult> IBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
  }; // OculusBeatmapDataAssetFileModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel*, "", "OculusBeatmapDataAssetFileModel");
#pragma pack(pop)