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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScoreController
  class ScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScoreMultiplierUIController
  class ScoreMultiplierUIController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI[] _multiplierTexts
    // Offset: 0x18
    ::Array<TMPro::TextMeshProUGUI*>* multiplierTexts;
    // private UnityEngine.UI.Image _multiplierProgressImage
    // Offset: 0x20
    UnityEngine::UI::Image* multiplierProgressImage;
    // private UnityEngine.Animator _multiplierAnimator
    // Offset: 0x28
    UnityEngine::Animator* multiplierAnimator;
    // private ScoreController _scoreController
    // Offset: 0x30
    GlobalNamespace::ScoreController* scoreController;
    // private System.Int32 _prevMultiplier
    // Offset: 0x38
    int prevMultiplier;
    // private System.Int32 _multiplierIncreasedTriggerId
    // Offset: 0x3C
    int multiplierIncreasedTriggerId;
    // private System.Single _progressTarget
    // Offset: 0x40
    float progressTarget;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xC2D38C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0xC2D580
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xC2D584
    void OnDisable();
    // private System.Void RegisterForEvents()
    // Offset: 0xC2D46C
    void RegisterForEvents();
    // private System.Void UnregisterFromEvents()
    // Offset: 0xC2D588
    void UnregisterFromEvents();
    // protected System.Void Update()
    // Offset: 0xC2D660
    void Update();
    // private System.Void HandleMultiplierDidChange(System.Int32 multiplier, System.Single progress)
    // Offset: 0xC2D76C
    void HandleMultiplierDidChange(int multiplier, float progress);
    // public System.Void .ctor()
    // Offset: 0xC2D84C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScoreMultiplierUIController* New_ctor();
  }; // ScoreMultiplierUIController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreMultiplierUIController*, "", "ScoreMultiplierUIController");
#pragma pack(pop)
