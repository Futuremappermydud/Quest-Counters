// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.ILeaderboardsModel
#include "OnlineServices/ILeaderboardsModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestLeaderboardsModel
  class TestLeaderboardsModel : public ::Il2CppObject, public OnlineServices::ILeaderboardsModel {
    public:
    // Nested type: GlobalNamespace::TestLeaderboardsModel::$GetLeaderboardEntriesAsync$d__4
    struct $GetLeaderboardEntriesAsync$d__4;
    // Nested type: GlobalNamespace::TestLeaderboardsModel::$SendLevelScoreResultAsync$d__5
    struct $SendLevelScoreResultAsync$d__5;
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Offset: 0x10
    System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent;
    // Creating conversion operator: operator System::Action_1<::Il2CppString*>*
    constexpr operator System::Action_1<::Il2CppString*>*() const noexcept {
      return scoreForLeaderboardDidUploadEvent;
    }
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xBAA948
    void add_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xBAA9EC
    void remove_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.String GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xBAAA90
    // Implemented from: OnlineServices.ILeaderboardsModel
    // Base method: System.String ILeaderboardsModel::GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    ::Il2CppString* GetLeaderboardId(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Threading.Tasks.Task`1<OnlineServices.GetLeaderboardEntriesResult> GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xBAAA9C
    // Implemented from: OnlineServices.ILeaderboardsModel
    // Base method: System.Threading.Tasks.Task`1<OnlineServices.GetLeaderboardEntriesResult> ILeaderboardsModel::GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<OnlineServices::GetLeaderboardEntriesResult>* GetLeaderboardEntriesAsync(OnlineServices::GetLeaderboardFilterData leaderboardFilterData, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.SendLeaderboardEntryResult> SendLevelScoreResultAsync(OnlineServices.LevelScoreResultsData levelScoreResult, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xBAABC8
    // Implemented from: OnlineServices.ILeaderboardsModel
    // Base method: System.Threading.Tasks.Task`1<OnlineServices.SendLeaderboardEntryResult> ILeaderboardsModel::SendLevelScoreResultAsync(OnlineServices.LevelScoreResultsData levelScoreResult, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<OnlineServices::SendLeaderboardEntryResult>* SendLevelScoreResultAsync(OnlineServices::LevelScoreResultsData levelScoreResult, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0xBAAD1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestLeaderboardsModel* New_ctor();
  }; // TestLeaderboardsModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestLeaderboardsModel*, "", "TestLeaderboardsModel");
#pragma pack(pop)
