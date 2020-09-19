// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Timeline.TimelineAsset/MediaType
#include "UnityEngine/Timeline/TimelineAsset_MediaType.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.TrackMediaType
  class TrackMediaType : public System::Attribute {
    public:
    // public readonly UnityEngine.Timeline.TimelineAsset/MediaType m_MediaType
    // Offset: 0x10
    UnityEngine::Timeline::TimelineAsset::MediaType m_MediaType;
    // Creating conversion operator: operator UnityEngine::Timeline::TimelineAsset::MediaType
    constexpr operator UnityEngine::Timeline::TimelineAsset::MediaType() const noexcept {
      return m_MediaType;
    }
    // public System.Void .ctor(UnityEngine.Timeline.TimelineAsset/MediaType mt)
    // Offset: 0x190F648
    static TrackMediaType* New_ctor(UnityEngine::Timeline::TimelineAsset::MediaType mt);
  }; // UnityEngine.Timeline.TrackMediaType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackMediaType*, "UnityEngine.Timeline", "TrackMediaType");
#pragma pack(pop)