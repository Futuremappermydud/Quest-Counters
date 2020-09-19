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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRDebugInfo
  class OVRDebugInfo : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.GameObject debugUIManager
    // Offset: 0x18
    UnityEngine::GameObject* debugUIManager;
    // private UnityEngine.GameObject debugUIObject
    // Offset: 0x20
    UnityEngine::GameObject* debugUIObject;
    // private UnityEngine.GameObject riftPresent
    // Offset: 0x28
    UnityEngine::GameObject* riftPresent;
    // private UnityEngine.GameObject fps
    // Offset: 0x30
    UnityEngine::GameObject* fps;
    // private UnityEngine.GameObject ipd
    // Offset: 0x38
    UnityEngine::GameObject* ipd;
    // private UnityEngine.GameObject fov
    // Offset: 0x40
    UnityEngine::GameObject* fov;
    // private UnityEngine.GameObject height
    // Offset: 0x48
    UnityEngine::GameObject* height;
    // private UnityEngine.GameObject depth
    // Offset: 0x50
    UnityEngine::GameObject* depth;
    // private UnityEngine.GameObject resolutionEyeTexture
    // Offset: 0x58
    UnityEngine::GameObject* resolutionEyeTexture;
    // private UnityEngine.GameObject latencies
    // Offset: 0x60
    UnityEngine::GameObject* latencies;
    // private UnityEngine.GameObject texts
    // Offset: 0x68
    UnityEngine::GameObject* texts;
    // private System.String strRiftPresent
    // Offset: 0x70
    ::Il2CppString* strRiftPresent;
    // private System.String strFPS
    // Offset: 0x78
    ::Il2CppString* strFPS;
    // private System.String strIPD
    // Offset: 0x80
    ::Il2CppString* strIPD;
    // private System.String strFOV
    // Offset: 0x88
    ::Il2CppString* strFOV;
    // private System.String strHeight
    // Offset: 0x90
    ::Il2CppString* strHeight;
    // private System.String strDepth
    // Offset: 0x98
    ::Il2CppString* strDepth;
    // private System.String strResolutionEyeTexture
    // Offset: 0xA0
    ::Il2CppString* strResolutionEyeTexture;
    // private System.String strLatencies
    // Offset: 0xA8
    ::Il2CppString* strLatencies;
    // private System.Single updateInterval
    // Offset: 0xB0
    float updateInterval;
    // private System.Single accum
    // Offset: 0xB4
    float accum;
    // private System.Int32 frames
    // Offset: 0xB8
    int frames;
    // private System.Single timeLeft
    // Offset: 0xBC
    float timeLeft;
    // private System.Boolean initUIComponent
    // Offset: 0xC0
    bool initUIComponent;
    // private System.Boolean isInited
    // Offset: 0xC1
    bool isInited;
    // private System.Single offsetY
    // Offset: 0xC4
    float offsetY;
    // private System.Single riftPresentTimeout
    // Offset: 0xC8
    float riftPresentTimeout;
    // private System.Boolean showVRVars
    // Offset: 0xCC
    bool showVRVars;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Awake()
    // Offset: 0xCCE864
    void Awake();
    // private System.Void Update()
    // Offset: 0xCCEA78
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0xCCF244
    void OnDestroy();
    // private System.Void InitUIComponents()
    // Offset: 0xCCEB40
    void InitUIComponents();
    // private System.Void UpdateVariable()
    // Offset: 0xCCEF9C
    void UpdateVariable();
    // private System.Void UpdateStrings()
    // Offset: 0xCCEFE0
    void UpdateStrings();
    // private System.Void RiftPresentGUI(UnityEngine.GameObject guiMainOBj)
    // Offset: 0xCCFA80
    void RiftPresentGUI(UnityEngine::GameObject* guiMainOBj);
    // private System.Void UpdateDeviceDetection()
    // Offset: 0xCCEF5C
    void UpdateDeviceDetection();
    // private UnityEngine.GameObject VariableObjectManager(UnityEngine.GameObject gameObject, System.String name, System.Single posY, System.String str, System.Int32 fontSize)
    // Offset: 0xCCF24C
    UnityEngine::GameObject* VariableObjectManager(UnityEngine::GameObject* gameObject, ::Il2CppString* name, float posY, ::Il2CppString* str, int fontSize);
    // private UnityEngine.GameObject ComponentComposition(UnityEngine.GameObject GO)
    // Offset: 0xCCFC48
    UnityEngine::GameObject* ComponentComposition(UnityEngine::GameObject* GO);
    // private System.Void UpdateIPD()
    // Offset: 0xCCF42C
    void UpdateIPD();
    // private System.Void UpdateEyeHeightOffset()
    // Offset: 0xCCF4FC
    void UpdateEyeHeightOffset();
    // private System.Void UpdateEyeDepthOffset()
    // Offset: 0xCCF5C0
    void UpdateEyeDepthOffset();
    // private System.Void UpdateFOV()
    // Offset: 0xCCF684
    void UpdateFOV();
    // private System.Void UpdateResolutionEyeTexture()
    // Offset: 0xCCF798
    void UpdateResolutionEyeTexture();
    // private System.Void UpdateLatencyValues()
    // Offset: 0xCCF98C
    void UpdateLatencyValues();
    // private System.Void UpdateFPS()
    // Offset: 0xCCF990
    void UpdateFPS();
    // public System.Void .ctor()
    // Offset: 0xCCFFC0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRDebugInfo* New_ctor();
  }; // OVRDebugInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDebugInfo*, "", "OVRDebugInfo");
#pragma pack(pop)
