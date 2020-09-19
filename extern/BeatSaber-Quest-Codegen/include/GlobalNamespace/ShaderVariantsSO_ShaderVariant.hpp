// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ShaderVariantsSO
#include "GlobalNamespace/ShaderVariantsSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ShaderVariantsSO/ShaderVariant
  class ShaderVariantsSO::ShaderVariant : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant
    class Variant;
    // private ShaderVariantsSO/ShaderVariant/Variant[] _variants
    // Offset: 0x10
    ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*>* variants;
    // private UnityEngine.Shader _shader
    // Offset: 0x18
    UnityEngine::Shader* shader;
    // public ShaderVariantsSO/ShaderVariant/Variant[] get_variants()
    // Offset: 0x1915710
    ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*>* get_variants();
    // public UnityEngine.Shader get_shader()
    // Offset: 0x1915718
    UnityEngine::Shader* get_shader();
    // public System.Void .ctor(UnityEngine.Shader shader, ShaderVariantsSO/ShaderVariant/Variant[] variants)
    // Offset: 0x1915720
    static ShaderVariantsSO::ShaderVariant* New_ctor(UnityEngine::Shader* shader, ::Array<GlobalNamespace::ShaderVariantsSO::ShaderVariant::Variant*>* variants);
  }; // ShaderVariantsSO/ShaderVariant
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderVariantsSO::ShaderVariant*, "", "ShaderVariantsSO/ShaderVariant");
#pragma pack(pop)