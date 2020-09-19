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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FillIndicator
  class FillIndicator : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Image _bgImage
    // Offset: 0x18
    UnityEngine::UI::Image* bgImage;
    // private UnityEngine.UI.Image _image
    // Offset: 0x20
    UnityEngine::UI::Image* image;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_fillAmount(System.Single value)
    // Offset: 0xBE7478
    void set_fillAmount(float value);
    // public System.Single get_fillAmount()
    // Offset: 0xBEDED8
    float get_fillAmount();
    // public System.Void .ctor()
    // Offset: 0xBEDEF4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FillIndicator* New_ctor();
  }; // FillIndicator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FillIndicator*, "", "FillIndicator");
#pragma pack(pop)
