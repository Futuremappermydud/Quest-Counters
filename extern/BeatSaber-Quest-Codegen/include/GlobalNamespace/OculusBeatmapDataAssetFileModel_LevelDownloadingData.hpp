// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusBeatmapDataAssetFileModel
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
// Including type: GetAssetBundleFileResult
#include "GlobalNamespace/GetAssetBundleFileResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusBeatmapDataAssetFileModel/LevelDownloadingData
  class OculusBeatmapDataAssetFileModel::LevelDownloadingData : public ::Il2CppObject {
    public:
    // public readonly System.String levelId
    // Offset: 0x10
    ::Il2CppString* levelId;
    // public readonly System.String assetBundlePath
    // Offset: 0x18
    ::Il2CppString* assetBundlePath;
    // public readonly System.Threading.Tasks.TaskCompletionSource`1<GetAssetBundleFileResult> downloadAssetBundleFileTCS
    // Offset: 0x20
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>* downloadAssetBundleFileTCS;
    // public System.Void .ctor(System.String levelId, System.String assetBundlePath)
    // Offset: 0xC36740
    static OculusBeatmapDataAssetFileModel::LevelDownloadingData* New_ctor(::Il2CppString* levelId, ::Il2CppString* assetBundlePath);
  }; // OculusBeatmapDataAssetFileModel/LevelDownloadingData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel::LevelDownloadingData*, "", "OculusBeatmapDataAssetFileModel/LevelDownloadingData");
#pragma pack(pop)
