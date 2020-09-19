// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: GameplayModifiersDTO
  struct GameplayModifiersDTO;
}
// Completed forward declares
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Autogenerated type: LeaderboardsDTO.LeaderboardEntryDTO
  class LeaderboardEntryDTO : public ::Il2CppObject {
    public:
    // public System.Int32 score
    // Offset: 0x10
    int score;
    // public System.Int32 unmodifiedScore
    // Offset: 0x14
    int unmodifiedScore;
    // public System.Int32 rank
    // Offset: 0x18
    int rank;
    // public System.DateTime updated
    // Offset: 0x20
    System::DateTime updated;
    // public System.String userDisplayName
    // Offset: 0x28
    ::Il2CppString* userDisplayName;
    // public System.String platformUserId
    // Offset: 0x30
    ::Il2CppString* platformUserId;
    // public LeaderboardsDTO.GameplayModifiersDTO[] gameplayModifiers
    // Offset: 0x38
    ::Array<LeaderboardsDTO::GameplayModifiersDTO>* gameplayModifiers;
    // public System.Void .ctor()
    // Offset: 0xB48248
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LeaderboardEntryDTO* New_ctor();
  }; // LeaderboardsDTO.LeaderboardEntryDTO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LeaderboardEntryDTO*, "LeaderboardsDTO", "LeaderboardEntryDTO");
#pragma pack(pop)
