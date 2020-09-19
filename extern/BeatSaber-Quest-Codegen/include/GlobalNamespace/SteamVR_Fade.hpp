// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Fade
  class SteamVR_Fade : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Color currentColor
    // Offset: 0x18
    UnityEngine::Color currentColor;
    // private UnityEngine.Color targetColor
    // Offset: 0x28
    UnityEngine::Color targetColor;
    // private UnityEngine.Color deltaColor
    // Offset: 0x38
    UnityEngine::Color deltaColor;
    // private System.Boolean fadeOverlay
    // Offset: 0x48
    bool fadeOverlay;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private UnityEngine.Material fadeMaterial
    static UnityEngine::Material* _get_fadeMaterial();
    // Set static field: static private UnityEngine.Material fadeMaterial
    static void _set_fadeMaterial(UnityEngine::Material* value);
    // Get static field: static private System.Int32 fadeMaterialColorID
    static int _get_fadeMaterialColorID();
    // Set static field: static private System.Int32 fadeMaterialColorID
    static void _set_fadeMaterialColorID(int value);
    // static public System.Void Start(UnityEngine.Color newColor, System.Single duration, System.Boolean fadeOverlay)
    // Offset: 0xD86164
    static void Start(UnityEngine::Color newColor, float duration, bool fadeOverlay);
    // static public System.Void View(UnityEngine.Color newColor, System.Single duration)
    // Offset: 0xD86228
    static void View(UnityEngine::Color newColor, float duration);
    // public System.Void OnStartFade(UnityEngine.Color newColor, System.Single duration, System.Boolean fadeOverlay)
    // Offset: 0xD862F0
    void OnStartFade(UnityEngine::Color newColor, float duration, bool fadeOverlay);
    // private System.Void OnEnable()
    // Offset: 0xD86358
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xD86520
    void OnDisable();
    // private System.Void OnPostRender()
    // Offset: 0xD865E4
    void OnPostRender();
    // public System.Void .ctor()
    // Offset: 0xD8690C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_Fade* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xD869B4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SteamVR_Fade
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Fade*, "", "SteamVR_Fade");
#pragma pack(pop)
