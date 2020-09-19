// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusBeatmapDataAssetFileModel
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: GetAssetBundleFileResult
#include "GlobalNamespace/GetAssetBundleFileResult.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetDetails
  class AssetDetails;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusBeatmapDataAssetFileModel/<GetDownloadAssetBundleFileAsync>d__16
  struct OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GetAssetBundleFileResult> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> $$t__builder;
    // public OculusBeatmapDataAssetFileModel <>4__this
    // Offset: 0x20
    GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this;
    // public Oculus.Platform.Models.AssetDetails assetDetails
    // Offset: 0x28
    Oculus::Platform::Models::AssetDetails* assetDetails;
    // public System.String levelId
    // Offset: 0x30
    ::Il2CppString* levelId;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<GetAssetBundleFileResult> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__1;
    // Creating value type constructor for type: $GetDownloadAssetBundleFileAsync$d__16
    constexpr $GetDownloadAssetBundleFileAsync$d__16(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> $$t__builder_ = {}, GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this_ = {}, Oculus::Platform::Models::AssetDetails* assetDetails_ = {}, ::Il2CppString* levelId_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, assetDetails{assetDetails_}, levelId{levelId_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2C860
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2C868
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusBeatmapDataAssetFileModel/<GetDownloadAssetBundleFileAsync>d__16
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16, "", "OculusBeatmapDataAssetFileModel/<GetDownloadAssetBundleFileAsync>d__16");
#pragma pack(pop)