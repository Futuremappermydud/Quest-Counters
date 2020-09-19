// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ISaberModelController
#include "GlobalNamespace/ISaberModelController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SetSaberGlowColor
  class SetSaberGlowColor;
  // Forward declaring type: SetSaberFakeGlowColor
  class SetSaberFakeGlowColor;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Forward declaring namespace: Xft
namespace Xft {
  // Forward declaring type: XWeaponTrail
  class XWeaponTrail;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BasicSaberModelController
  class BasicSaberModelController : public UnityEngine::MonoBehaviour, public GlobalNamespace::ISaberModelController {
    public:
    // Nested type: GlobalNamespace::BasicSaberModelController::InitData
    class InitData;
    // private Xft.XWeaponTrail _saberWeaponTrail
    // Offset: 0x18
    Xft::XWeaponTrail* saberWeaponTrail;
    // private SetSaberGlowColor[] _setSaberGlowColors
    // Offset: 0x20
    ::Array<GlobalNamespace::SetSaberGlowColor*>* setSaberGlowColors;
    // private SetSaberFakeGlowColor[] _setSaberFakeGlowColors
    // Offset: 0x28
    ::Array<GlobalNamespace::SetSaberFakeGlowColor*>* setSaberFakeGlowColors;
    // private UnityEngine.Light _light
    // Offset: 0x30
    UnityEngine::Light* light;
    // private BasicSaberModelController/InitData _initData
    // Offset: 0x38
    GlobalNamespace::BasicSaberModelController::InitData* initData;
    // private ColorManager _colorManager
    // Offset: 0x40
    GlobalNamespace::ColorManager* colorManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init(UnityEngine.Transform parent, SaberType saberType)
    // Offset: 0xB8BFDC
    // Implemented from: ISaberModelController
    // Base method: System.Void ISaberModelController::Init(UnityEngine.Transform parent, SaberType saberType)
    void Init(UnityEngine::Transform* parent, GlobalNamespace::SaberType saberType);
    // public System.Void .ctor()
    // Offset: 0xB8C228
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BasicSaberModelController* New_ctor();
  }; // BasicSaberModelController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicSaberModelController*, "", "BasicSaberModelController");
#pragma pack(pop)