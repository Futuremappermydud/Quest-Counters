// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRichPresenceData
#include "GlobalNamespace/IRichPresenceData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayingTutorialPresenceData
  class PlayingTutorialPresenceData : public ::Il2CppObject, public GlobalNamespace::IRichPresenceData {
    public:
    // private System.String <localizedDescription>k__BackingField
    // Offset: 0x10
    ::Il2CppString* localizedDescription;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return localizedDescription;
    }
    // static field const value: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static constexpr const char* kPlayingCampaignRichPresenceLocalizationKey = "PLAYING_TUTORIAL_PRESENCE";
    // Get static field: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static ::Il2CppString* _get_kPlayingCampaignRichPresenceLocalizationKey();
    // Set static field: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static void _set_kPlayingCampaignRichPresenceLocalizationKey(::Il2CppString* value);
    // private System.Void set_localizedDescription(System.String value)
    // Offset: 0xC1D4BC
    void set_localizedDescription(::Il2CppString* value);
    // public System.String get_apiName()
    // Offset: 0xC1D46C
    // Implemented from: IRichPresenceData
    // Base method: System.String IRichPresenceData::get_apiName()
    ::Il2CppString* get_apiName();
    // public System.String get_localizedDescription()
    // Offset: 0xC1D4B4
    // Implemented from: IRichPresenceData
    // Base method: System.String IRichPresenceData::get_localizedDescription()
    ::Il2CppString* get_localizedDescription();
    // public System.Void .ctor()
    // Offset: 0xC1D4C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayingTutorialPresenceData* New_ctor();
  }; // PlayingTutorialPresenceData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayingTutorialPresenceData*, "", "PlayingTutorialPresenceData");
#pragma pack(pop)
