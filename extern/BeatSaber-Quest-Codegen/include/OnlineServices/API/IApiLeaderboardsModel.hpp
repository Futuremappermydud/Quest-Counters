// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.ApiResponse`1
#include "OnlineServices/API/ApiResponse_1.hpp"
// Including type: LeaderboardsDTO.LeaderboardEntriesDTO
#include "LeaderboardsDTO/LeaderboardEntriesDTO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LeaderboardQueryDTO
  class LeaderboardQueryDTO;
  // Forward declaring type: LevelScoreResultDTO
  class LevelScoreResultDTO;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.IApiLeaderboardsModel
  class IApiLeaderboardsModel {
    public:
    // public System.Threading.Tasks.Task`1<OnlineServices.API.ApiResponse`1<LeaderboardsDTO.LeaderboardEntriesDTO>> GetLeaderboardEntriesAsync(LeaderboardsDTO.LeaderboardQueryDTO leaderboardQueryDTO, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<OnlineServices::API::ApiResponse_1<LeaderboardsDTO::LeaderboardEntriesDTO>>* GetLeaderboardEntriesAsync(LeaderboardsDTO::LeaderboardQueryDTO* leaderboardQueryDTO, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.API.Response> SendLevelScoreResultAsync(LeaderboardsDTO.LevelScoreResultDTO levelScoreResultDto, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<OnlineServices::API::Response>* SendLevelScoreResultAsync(LeaderboardsDTO::LevelScoreResultDTO* levelScoreResultDto, System::Threading::CancellationToken cancellationToken);
    // public System.Void LogoutAsync()
    // Offset: 0xFFFFFFFF
    void LogoutAsync();
  }; // OnlineServices.API.IApiLeaderboardsModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::IApiLeaderboardsModel*, "OnlineServices.API", "IApiLeaderboardsModel");
#pragma pack(pop)
