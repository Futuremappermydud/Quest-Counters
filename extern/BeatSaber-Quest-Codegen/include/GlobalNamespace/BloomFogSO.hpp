// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomFogSO
  class BloomFogSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // public BloomFogEnvironmentParams fog0Params
    // Offset: 0x18
    GlobalNamespace::BloomFogEnvironmentParams* fog0Params;
    // public BloomFogEnvironmentParams fog1Params
    // Offset: 0x20
    GlobalNamespace::BloomFogEnvironmentParams* fog1Params;
    // private System.Boolean _bloomFogEnabled
    // Offset: 0x28
    bool bloomFogEnabled;
    // private System.Single _transition
    // Offset: 0x2C
    float transition;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kBloomFogEnabledKeyword
    static constexpr const char* kBloomFogEnabledKeyword = "ENABLE_BLOOM_FOG";
    // Get static field: static private System.String kBloomFogEnabledKeyword
    static ::Il2CppString* _get_kBloomFogEnabledKeyword();
    // Set static field: static private System.String kBloomFogEnabledKeyword
    static void _set_kBloomFogEnabledKeyword(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 _customFogColorID
    static int _get__customFogColorID();
    // Set static field: static private readonly System.Int32 _customFogColorID
    static void _set__customFogColorID(int value);
    // Get static field: static private readonly System.Int32 _customFogAttenuationID
    static int _get__customFogAttenuationID();
    // Set static field: static private readonly System.Int32 _customFogAttenuationID
    static void _set__customFogAttenuationID(int value);
    // Get static field: static private readonly System.Int32 _customFogOffsetID
    static int _get__customFogOffsetID();
    // Set static field: static private readonly System.Int32 _customFogOffsetID
    static void _set__customFogOffsetID(int value);
    // public System.Void set_transition(System.Single value)
    // Offset: 0x1824C40
    void set_transition(float value);
    // public System.Single get_transition()
    // Offset: 0x1824E24
    float get_transition();
    // public System.Void set_bloomFogEnabled(System.Boolean value)
    // Offset: 0x1824E2C
    void set_bloomFogEnabled(bool value);
    // public System.Boolean get_bloomFogEnabled()
    // Offset: 0x1824EB4
    bool get_bloomFogEnabled();
    // public System.Void UpdateShaderParams()
    // Offset: 0x1824C74
    void UpdateShaderParams();
    // private System.Void SetParams(System.Single attenuation, System.Single offset)
    // Offset: 0x1824F7C
    void SetParams(float attenuation, float offset);
    // protected override System.Void OnEnable()
    // Offset: 0x1824EBC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x1825014
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomFogSO* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1825024
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomFogSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFogSO*, "", "BloomFogSO");
#pragma pack(pop)
