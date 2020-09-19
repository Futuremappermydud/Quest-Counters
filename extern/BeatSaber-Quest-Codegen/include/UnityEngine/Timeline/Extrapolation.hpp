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
  // Forward declaring type: TrackAsset
  class TrackAsset;
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.Extrapolation
  class Extrapolation : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Timeline::Extrapolation::$$c
    class $$c;
    // Get static field: static readonly System.Double kMinExtrapolationTime
    static double _get_kMinExtrapolationTime();
    // Set static field: static readonly System.Double kMinExtrapolationTime
    static void _set_kMinExtrapolationTime(double value);
    // static System.Void CalculateExtrapolationTimes(UnityEngine.Timeline.TrackAsset asset)
    // Offset: 0x109AF74
    static void CalculateExtrapolationTimes(UnityEngine::Timeline::TrackAsset* asset);
    // static private UnityEngine.Timeline.TimelineClip[] SortClipsByStartTime(UnityEngine.Timeline.TimelineClip[] clips)
    // Offset: 0x109B368
    static ::Array<UnityEngine::Timeline::TimelineClip*>* SortClipsByStartTime(::Array<UnityEngine::Timeline::TimelineClip*>* clips);
    // static private System.Void .cctor()
    // Offset: 0x109B4E4
    static void _cctor();
  }; // UnityEngine.Timeline.Extrapolation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::Extrapolation*, "UnityEngine.Timeline", "Extrapolation");
#pragma pack(pop)
