// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMAutoincrementedRequestId
#include "GlobalNamespace/HMAutoincrementedRequestId.hpp"
// Including type: ISaberMovementDataProcessor
#include "GlobalNamespace/ISaberMovementDataProcessor.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberSwingRatingCounter
  class SaberSwingRatingCounter : public GlobalNamespace::HMAutoincrementedRequestId, public GlobalNamespace::ISaberMovementDataProcessor {
    public:
    // Nested type: GlobalNamespace::SaberSwingRatingCounter::DidChangeDelegate
    class DidChangeDelegate;
    // Nested type: GlobalNamespace::SaberSwingRatingCounter::DidFinishDelegate
    class DidFinishDelegate;
    // private SaberSwingRatingCounter/DidChangeDelegate didChangeEvent
    // Offset: 0x18
    GlobalNamespace::SaberSwingRatingCounter::DidChangeDelegate* didChangeEvent;
    // private SaberSwingRatingCounter/DidFinishDelegate didFinishEvent
    // Offset: 0x20
    GlobalNamespace::SaberSwingRatingCounter::DidFinishDelegate* didFinishEvent;
    // private SaberMovementData _saberMovementData
    // Offset: 0x28
    GlobalNamespace::SaberMovementData* saberMovementData;
    // private UnityEngine.Vector3 _cutPlaneNormal
    // Offset: 0x30
    UnityEngine::Vector3 cutPlaneNormal;
    // private System.Single _cutTime
    // Offset: 0x3C
    float cutTime;
    // private System.Single _afterCutRating
    // Offset: 0x40
    float afterCutRating;
    // private System.Single _beforeCutRating
    // Offset: 0x44
    float beforeCutRating;
    // private System.Boolean _didFinish
    // Offset: 0x48
    bool didFinish;
    // private System.Boolean _initialized
    // Offset: 0x49
    bool initialized;
    // private UnityEngine.Plane _notePlane
    // Offset: 0x4C
    UnityEngine::Plane notePlane;
    // private System.Boolean _notePlaneWasCut
    // Offset: 0x5C
    bool notePlaneWasCut;
    // private UnityEngine.Vector3 _noteForward
    // Offset: 0x60
    UnityEngine::Vector3 noteForward;
    // private UnityEngine.Vector3 _notePlaneCenter
    // Offset: 0x6C
    UnityEngine::Vector3 notePlaneCenter;
    // private UnityEngine.Vector3 _beforeCutTopPos
    // Offset: 0x78
    UnityEngine::Vector3 beforeCutTopPos;
    // private UnityEngine.Vector3 _beforeCutBottomPos
    // Offset: 0x84
    UnityEngine::Vector3 beforeCutBottomPos;
    // private UnityEngine.Vector3 _afterCutTopPos
    // Offset: 0x90
    UnityEngine::Vector3 afterCutTopPos;
    // private UnityEngine.Vector3 _afterCutBottomPos
    // Offset: 0x9C
    UnityEngine::Vector3 afterCutBottomPos;
    // private UnityEngine.Vector3 _newPlaneNormal
    // Offset: 0xA8
    UnityEngine::Vector3 newPlaneNormal;
    // private UnityEngine.Vector3 _cutTopPos
    // Offset: 0xB4
    UnityEngine::Vector3 cutTopPos;
    // private UnityEngine.Vector3 _cutBottomPos
    // Offset: 0xC0
    UnityEngine::Vector3 cutBottomPos;
    // Deleting conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept = delete;
    // public System.Void add_didChangeEvent(SaberSwingRatingCounter/DidChangeDelegate value)
    // Offset: 0xC298EC
    void add_didChangeEvent(GlobalNamespace::SaberSwingRatingCounter::DidChangeDelegate* value);
    // public System.Void remove_didChangeEvent(SaberSwingRatingCounter/DidChangeDelegate value)
    // Offset: 0xC29990
    void remove_didChangeEvent(GlobalNamespace::SaberSwingRatingCounter::DidChangeDelegate* value);
    // public System.Void add_didFinishEvent(SaberSwingRatingCounter/DidFinishDelegate value)
    // Offset: 0xC29A34
    void add_didFinishEvent(GlobalNamespace::SaberSwingRatingCounter::DidFinishDelegate* value);
    // public System.Void remove_didFinishEvent(SaberSwingRatingCounter/DidFinishDelegate value)
    // Offset: 0xC29AD8
    void remove_didFinishEvent(GlobalNamespace::SaberSwingRatingCounter::DidFinishDelegate* value);
    // public System.Boolean get_didFinish()
    // Offset: 0xC29B7C
    bool get_didFinish();
    // public System.Single get_beforeCutRating()
    // Offset: 0xC29B84
    float get_beforeCutRating();
    // public System.Single get_afterCutRating()
    // Offset: 0xC29B8C
    float get_afterCutRating();
    // public System.Void Init(SaberMovementData saberMovementData, UnityEngine.Transform noteTransform)
    // Offset: 0xC24688
    void Init(GlobalNamespace::SaberMovementData* saberMovementData, UnityEngine::Transform* noteTransform);
    // public System.Void Deinit()
    // Offset: 0xC23F7C
    void Deinit();
    // public System.Void DrawGizmos()
    // Offset: 0xC24888
    void DrawGizmos();
    // public System.Void ProcessNewData(SaberMovementData/Data newData, SaberMovementData/Data prevData, System.Boolean prevDataAreValid)
    // Offset: 0xC29B94
    // Implemented from: ISaberMovementDataProcessor
    // Base method: System.Void ISaberMovementDataProcessor::ProcessNewData(SaberMovementData/Data newData, SaberMovementData/Data prevData, System.Boolean prevDataAreValid)
    void ProcessNewData(GlobalNamespace::SaberMovementData::Data newData, GlobalNamespace::SaberMovementData::Data prevData, bool prevDataAreValid);
    // public System.Void .ctor()
    // Offset: 0xC23CFC
    // Implemented from: HMAutoincrementedRequestId
    // Base method: System.Void HMAutoincrementedRequestId::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaberSwingRatingCounter* New_ctor();
  }; // SaberSwingRatingCounter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberSwingRatingCounter*, "", "SaberSwingRatingCounter");
#pragma pack(pop)
