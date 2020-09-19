// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.AnimationTrack
#include "UnityEngine/Timeline/AnimationTrack.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.AnimationTrack/AnimationTrackUpgrade
  class AnimationTrack::AnimationTrackUpgrade : public ::Il2CppObject {
    public:
    // static public System.Void ConvertRotationsToEuler(UnityEngine.Timeline.AnimationTrack track)
    // Offset: 0x1094434
    static void ConvertRotationsToEuler(UnityEngine::Timeline::AnimationTrack* track);
    // static public System.Void ConvertRootMotion(UnityEngine.Timeline.AnimationTrack track)
    // Offset: 0x1094480
    static void ConvertRootMotion(UnityEngine::Timeline::AnimationTrack* track);
    // static public System.Void ConvertInfiniteTrack(UnityEngine.Timeline.AnimationTrack track)
    // Offset: 0x1094518
    static void ConvertInfiniteTrack(UnityEngine::Timeline::AnimationTrack* track);
  }; // UnityEngine.Timeline.AnimationTrack/AnimationTrackUpgrade
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade*, "UnityEngine.Timeline", "AnimationTrack/AnimationTrackUpgrade");
#pragma pack(pop)
