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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: InstancingValuesTester
  class InstancingValuesTester : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::InstancingValuesTester::PropertyNameFloatValuePair
    class PropertyNameFloatValuePair;
    // Nested type: GlobalNamespace::InstancingValuesTester::PropertyNameVectorValuePair
    class PropertyNameVectorValuePair;
    // Nested type: GlobalNamespace::InstancingValuesTester::PropertyNameColorValuePair
    class PropertyNameColorValuePair;
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Offset: 0x18
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // private InstancingValuesTester/PropertyNameFloatValuePair[] _floats
    // Offset: 0x20
    ::Array<GlobalNamespace::InstancingValuesTester::PropertyNameFloatValuePair*>* floats;
    // private InstancingValuesTester/PropertyNameVectorValuePair[] _vectors
    // Offset: 0x28
    ::Array<GlobalNamespace::InstancingValuesTester::PropertyNameVectorValuePair*>* vectors;
    // private InstancingValuesTester/PropertyNameColorValuePair[] _colors
    // Offset: 0x30
    ::Array<GlobalNamespace::InstancingValuesTester::PropertyNameColorValuePair*>* colors;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1829700
    void Start();
    // protected System.Void OnValidate()
    // Offset: 0x1829970
    void OnValidate();
    // private System.Void ApplyParams()
    // Offset: 0x1829704
    void ApplyParams();
    // public System.Void .ctor()
    // Offset: 0x1829A5C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static InstancingValuesTester* New_ctor();
  }; // InstancingValuesTester
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InstancingValuesTester*, "", "InstancingValuesTester");
#pragma pack(pop)