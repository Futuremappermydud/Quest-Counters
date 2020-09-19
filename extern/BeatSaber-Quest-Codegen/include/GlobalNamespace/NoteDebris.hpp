// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: NoteType
  struct NoteType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Mesh
  class Mesh;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteDebris
  class NoteDebris : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NoteDebris::Pool
    class Pool;
    // private UnityEngine.Transform _meshTransform
    // Offset: 0x18
    UnityEngine::Transform* meshTransform;
    // private UnityEngine.Rigidbody _rigidbody
    // Offset: 0x20
    UnityEngine::Rigidbody* rigidbody;
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Offset: 0x28
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // private UnityEngine.AnimationCurve _cutoutCurve
    // Offset: 0x30
    UnityEngine::AnimationCurve* cutoutCurve;
    // private System.Single _maxCutPointCenterDistance
    // Offset: 0x38
    float maxCutPointCenterDistance;
    // private UnityEngine.Mesh _centroidComputationMesh
    // Offset: 0x40
    UnityEngine::Mesh* centroidComputationMesh;
    // private ColorManager _colorManager
    // Offset: 0x48
    GlobalNamespace::ColorManager* colorManager;
    // private System.Action`1<NoteDebris> didFinishEvent
    // Offset: 0x50
    System::Action_1<GlobalNamespace::NoteDebris*>* didFinishEvent;
    // private System.Single _elapsedTime
    // Offset: 0x58
    float elapsedTime;
    // private System.Single _lifeTime
    // Offset: 0x5C
    float lifeTime;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.Int32 _cutoutPropertyID
    static int _get__cutoutPropertyID();
    // Set static field: static private readonly System.Int32 _cutoutPropertyID
    static void _set__cutoutPropertyID(int value);
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // Get static field: static private readonly System.Int32 _cutPlaneID
    static int _get__cutPlaneID();
    // Set static field: static private readonly System.Int32 _cutPlaneID
    static void _set__cutPlaneID(int value);
    // Get static field: static private readonly System.Int32 _cutoutTexOffsetID
    static int _get__cutoutTexOffsetID();
    // Set static field: static private readonly System.Int32 _cutoutTexOffsetID
    static void _set__cutoutTexOffsetID(int value);
    // Get static field: static private UnityEngine.Vector3[] _meshVertices
    static ::Array<UnityEngine::Vector3>* _get__meshVertices();
    // Set static field: static private UnityEngine.Vector3[] _meshVertices
    static void _set__meshVertices(::Array<UnityEngine::Vector3>* value);
    // public System.Void add_didFinishEvent(System.Action`1<NoteDebris> value)
    // Offset: 0xC196A4
    void add_didFinishEvent(System::Action_1<GlobalNamespace::NoteDebris*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<NoteDebris> value)
    // Offset: 0xC19748
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::NoteDebris*>* value);
    // protected System.Void Awake()
    // Offset: 0xC197EC
    void Awake();
    // protected System.Void Update()
    // Offset: 0xC198AC
    void Update();
    // public System.Void Init(NoteType noteType, UnityEngine.Transform initTransform, UnityEngine.Vector3 cutPoint, UnityEngine.Vector3 cutNormal, UnityEngine.Vector3 force, UnityEngine.Vector3 torque, System.Single lifeTime)
    // Offset: 0xC199D0
    void Init(GlobalNamespace::NoteType noteType, UnityEngine::Transform* initTransform, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, UnityEngine::Vector3 force, UnityEngine::Vector3 torque, float lifeTime);
    // public System.Void .ctor()
    // Offset: 0xC1A1B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteDebris* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xC1A20C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // NoteDebris
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebris*, "", "NoteDebris");
#pragma pack(pop)
