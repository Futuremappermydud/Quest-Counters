// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: GroupTrack
  class GroupTrack;
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.TrackAssetExtensions
  class TrackAssetExtensions : public ::Il2CppObject {
    public:
    // static public UnityEngine.Timeline.GroupTrack GetGroup(UnityEngine.Timeline.TrackAsset asset)
    // Offset: 0x190F08C
    static UnityEngine::Timeline::GroupTrack* GetGroup(UnityEngine::Timeline::TrackAsset* asset);
    // static public System.Void SetGroup(UnityEngine.Timeline.TrackAsset asset, UnityEngine.Timeline.GroupTrack group)
    // Offset: 0x190F154
    static void SetGroup(UnityEngine::Timeline::TrackAsset* asset, UnityEngine::Timeline::GroupTrack* group);
  }; // UnityEngine.Timeline.TrackAssetExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackAssetExtensions*, "UnityEngine.Timeline", "TrackAssetExtensions");
#pragma pack(pop)
