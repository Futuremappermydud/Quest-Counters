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
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DirectionalLight
  class DirectionalLight : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Color color
    // Offset: 0x18
    UnityEngine::Color color;
    // public System.Single intensity
    // Offset: 0x28
    float intensity;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Int32 kMaxLights
    static constexpr const int kMaxLights = 5;
    // Get static field: static public System.Int32 kMaxLights
    static int _get_kMaxLights();
    // Set static field: static public System.Int32 kMaxLights
    static void _set_kMaxLights(int value);
    // Get static field: static private System.Collections.Generic.List`1<DirectionalLight> _lights
    static System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight*>* _get__lights();
    // Set static field: static private System.Collections.Generic.List`1<DirectionalLight> _lights
    static void _set__lights(System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight*>* value);
    // static public System.Collections.Generic.List`1<DirectionalLight> get_lights()
    // Offset: 0x1828D28
    static System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight*>* get_lights();
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x1828D90
    static void NoDomainReloadInit();
    // protected System.Void OnEnable()
    // Offset: 0x1828E24
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1828EA8
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x1828F2C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DirectionalLight* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1828F34
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // DirectionalLight
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DirectionalLight*, "", "DirectionalLight");
#pragma pack(pop)
