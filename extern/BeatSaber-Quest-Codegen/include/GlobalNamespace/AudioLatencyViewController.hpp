// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: VisualMetronome
  class VisualMetronome;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: RangeValuesTextSlider
  class RangeValuesTextSlider;
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AudioLatencyViewController
  class AudioLatencyViewController : public HMUI::ViewController {
    public:
    // private FloatSO _audioLatency
    // Offset: 0x68
    GlobalNamespace::FloatSO* audioLatency;
    // private BoolSO _overrideAudioLatency
    // Offset: 0x70
    GlobalNamespace::BoolSO* overrideAudioLatency;
    // private UnityEngine.CanvasGroup _setupCanvasGroup
    // Offset: 0x78
    UnityEngine::CanvasGroup* setupCanvasGroup;
    // private UnityEngine.UI.Toggle _overrideAudioLatencyToggle
    // Offset: 0x80
    UnityEngine::UI::Toggle* overrideAudioLatencyToggle;
    // private HMUI.RangeValuesTextSlider _slider
    // Offset: 0x88
    HMUI::RangeValuesTextSlider* slider;
    // private VisualMetronome _visualMetronome
    // Offset: 0x90
    GlobalNamespace::VisualMetronome* visualMetronome;
    // private System.Single _disabledAlpha
    // Offset: 0x98
    float disabledAlpha;
    // private HMUI.ToggleBinder _toggleBinder
    // Offset: 0xA0
    HMUI::ToggleBinder* toggleBinder;
    // private System.Void SliderValueDidChange(HMUI.RangeValuesTextSlider slider, System.Single value)
    // Offset: 0xB8A244
    void SliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value);
    // private System.Void HandleOverrideAudioLatencyToggleValueChanged(System.Boolean isOn)
    // Offset: 0xB8A2C0
    void HandleOverrideAudioLatencyToggleValueChanged(bool isOn);
    // public System.Void RefreshVisuals(System.Boolean overrideAutioLatencyIsEnabled)
    // Offset: 0xB8A060
    void RefreshVisuals(bool overrideAutioLatencyIsEnabled);
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xB89E80
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // protected override System.Void OnDestroy()
    // Offset: 0xB8A15C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0xB8A338
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioLatencyViewController* New_ctor();
  }; // AudioLatencyViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioLatencyViewController*, "", "AudioLatencyViewController");
#pragma pack(pop)
