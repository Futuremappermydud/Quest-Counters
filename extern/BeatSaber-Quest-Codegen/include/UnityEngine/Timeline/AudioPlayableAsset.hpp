// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: AudioClipProperties
  class AudioClipProperties;
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.AudioPlayableAsset
  class AudioPlayableAsset : public UnityEngine::Playables::PlayableAsset, public UnityEngine::Timeline::ITimelineClipAsset {
    public:
    // Nested type: UnityEngine::Timeline::AudioPlayableAsset::$get_outputs$d__16
    class $get_outputs$d__16;
    // private UnityEngine.AudioClip m_Clip
    // Offset: 0x18
    UnityEngine::AudioClip* m_Clip;
    // private System.Boolean m_Loop
    // Offset: 0x20
    bool m_Loop;
    // private System.Single m_bufferingTime
    // Offset: 0x24
    float m_bufferingTime;
    // private UnityEngine.Timeline.AudioClipProperties m_ClipProperties
    // Offset: 0x28
    UnityEngine::Timeline::AudioClipProperties* m_ClipProperties;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // System.Single get_bufferingTime()
    // Offset: 0x1094B20
    float get_bufferingTime();
    // System.Void set_bufferingTime(System.Single value)
    // Offset: 0x1094B28
    void set_bufferingTime(float value);
    // public UnityEngine.AudioClip get_clip()
    // Offset: 0x1094B30
    UnityEngine::AudioClip* get_clip();
    // public System.Void set_clip(UnityEngine.AudioClip value)
    // Offset: 0x1094B38
    void set_clip(UnityEngine::AudioClip* value);
    // public System.Boolean get_loop()
    // Offset: 0x1094B40
    bool get_loop();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0x1094B48
    void set_loop(bool value);
    // public override System.Double get_duration()
    // Offset: 0x1094B54
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Double PlayableAsset::get_duration()
    double get_duration();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x1094C18
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> PlayableAsset::get_outputs()
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0x1094CDC
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go);
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x1094E08
    // Implemented from: UnityEngine.Timeline.ITimelineClipAsset
    // Base method: UnityEngine.Timeline.ClipCaps ITimelineClipAsset::get_clipCaps()
    UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public System.Void .ctor()
    // Offset: 0x1094E14
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioPlayableAsset* New_ctor();
  }; // UnityEngine.Timeline.AudioPlayableAsset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AudioPlayableAsset*, "UnityEngine.Timeline", "AudioPlayableAsset");
#pragma pack(pop)
