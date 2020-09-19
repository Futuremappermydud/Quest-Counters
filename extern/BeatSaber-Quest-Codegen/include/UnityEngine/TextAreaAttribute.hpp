// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.TextAreaAttribute
  class TextAreaAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.Int32 minLines
    // Offset: 0x10
    int minLines;
    // public readonly System.Int32 maxLines
    // Offset: 0x14
    int maxLines;
    // public System.Void .ctor(System.Int32 minLines, System.Int32 maxLines)
    // Offset: 0x1394784
    static TextAreaAttribute* New_ctor(int minLines, int maxLines);
  }; // UnityEngine.TextAreaAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextAreaAttribute*, "UnityEngine", "TextAreaAttribute");
#pragma pack(pop)
