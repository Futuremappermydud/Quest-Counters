// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.Baker
  class Baker : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::Baker::Mode
    struct Mode;
    // Autogenerated type: RootMotion.Baker/Mode
    struct Mode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.Baker/Mode AnimationClips
      static constexpr const int AnimationClips = 0;
      // Get static field: static public RootMotion.Baker/Mode AnimationClips
      static RootMotion::Baker::Mode _get_AnimationClips();
      // Set static field: static public RootMotion.Baker/Mode AnimationClips
      static void _set_AnimationClips(RootMotion::Baker::Mode value);
      // static field const value: static public RootMotion.Baker/Mode AnimationStates
      static constexpr const int AnimationStates = 1;
      // Get static field: static public RootMotion.Baker/Mode AnimationStates
      static RootMotion::Baker::Mode _get_AnimationStates();
      // Set static field: static public RootMotion.Baker/Mode AnimationStates
      static void _set_AnimationStates(RootMotion::Baker::Mode value);
      // static field const value: static public RootMotion.Baker/Mode PlayableDirector
      static constexpr const int PlayableDirector = 2;
      // Get static field: static public RootMotion.Baker/Mode PlayableDirector
      static RootMotion::Baker::Mode _get_PlayableDirector();
      // Set static field: static public RootMotion.Baker/Mode PlayableDirector
      static void _set_PlayableDirector(RootMotion::Baker::Mode value);
      // static field const value: static public RootMotion.Baker/Mode Realtime
      static constexpr const int Realtime = 3;
      // Get static field: static public RootMotion.Baker/Mode Realtime
      static RootMotion::Baker::Mode _get_Realtime();
      // Set static field: static public RootMotion.Baker/Mode Realtime
      static void _set_Realtime(RootMotion::Baker::Mode value);
    }; // RootMotion.Baker/Mode
    // public System.Int32 frameRate
    // Offset: 0x18
    int frameRate;
    // public System.Single keyReductionError
    // Offset: 0x1C
    float keyReductionError;
    // public RootMotion.Baker/Mode mode
    // Offset: 0x20
    RootMotion::Baker::Mode mode;
    // public UnityEngine.AnimationClip[] animationClips
    // Offset: 0x28
    ::Array<UnityEngine::AnimationClip*>* animationClips;
    // public System.String[] animationStates
    // Offset: 0x30
    ::Array<::Il2CppString*>* animationStates;
    // public System.Boolean loop
    // Offset: 0x38
    bool loop;
    // public System.String saveToFolder
    // Offset: 0x40
    ::Il2CppString* saveToFolder;
    // public System.String appendName
    // Offset: 0x48
    ::Il2CppString* appendName;
    // public System.String saveName
    // Offset: 0x50
    ::Il2CppString* saveName;
    // private System.Boolean <isBaking>k__BackingField
    // Offset: 0x58
    bool isBaking;
    // private System.Single <bakingProgress>k__BackingField
    // Offset: 0x5C
    float bakingProgress;
    // public UnityEngine.Animator animator
    // Offset: 0x60
    UnityEngine::Animator* animator;
    // public UnityEngine.Playables.PlayableDirector director
    // Offset: 0x68
    UnityEngine::Playables::PlayableDirector* director;
    // private System.Single <clipLength>k__BackingField
    // Offset: 0x70
    float clipLength;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void OpenUserManual()
    // Offset: 0x13A07A0
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x13A07EC
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x13A0838
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x13A0884
    void ASThread();
    // public System.Boolean get_isBaking()
    // Offset: 0x13A08D0
    bool get_isBaking();
    // private System.Void set_isBaking(System.Boolean value)
    // Offset: 0x13A08D8
    void set_isBaking(bool value);
    // public System.Single get_bakingProgress()
    // Offset: 0x13A08E4
    float get_bakingProgress();
    // private System.Void set_bakingProgress(System.Single value)
    // Offset: 0x13A08EC
    void set_bakingProgress(float value);
    // protected UnityEngine.Transform GetCharacterRoot()
    // Offset: 0xFFFFFFFF
    UnityEngine::Transform* GetCharacterRoot();
    // protected System.Void OnStartBaking()
    // Offset: 0xFFFFFFFF
    void OnStartBaking();
    // protected System.Void OnSetLoopFrame(System.Single time)
    // Offset: 0xFFFFFFFF
    void OnSetLoopFrame(float time);
    // protected System.Void OnSetCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0xFFFFFFFF
    void OnSetCurves(UnityEngine::AnimationClip*& clip);
    // protected System.Void OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    // Offset: 0xFFFFFFFF
    void OnSetKeyframes(float time, bool lastFrame);
    // protected System.Single get_clipLength()
    // Offset: 0x13A08F4
    float get_clipLength();
    // private System.Void set_clipLength(System.Single value)
    // Offset: 0x13A08FC
    void set_clipLength(float value);
    // public System.Void BakeClip()
    // Offset: 0x13A0904
    void BakeClip();
    // public System.Void StartBaking()
    // Offset: 0x13A0908
    void StartBaking();
    // public System.Void StopBaking()
    // Offset: 0x13A090C
    void StopBaking();
    // protected System.Void .ctor()
    // Offset: 0x13A0910
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Baker* New_ctor();
  }; // RootMotion.Baker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Baker*, "RootMotion", "Baker");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Baker::Mode, "RootMotion", "Baker/Mode");
#pragma pack(pop)