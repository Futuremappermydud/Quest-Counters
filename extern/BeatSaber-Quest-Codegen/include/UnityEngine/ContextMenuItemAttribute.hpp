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
  // Autogenerated type: UnityEngine.ContextMenuItemAttribute
  class ContextMenuItemAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // public readonly System.String function
    // Offset: 0x18
    ::Il2CppString* function;
    // public System.Void .ctor(System.String name, System.String function)
    // Offset: 0x130BB04
    static ContextMenuItemAttribute* New_ctor(::Il2CppString* name, ::Il2CppString* function);
  }; // UnityEngine.ContextMenuItemAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContextMenuItemAttribute*, "UnityEngine", "ContextMenuItemAttribute");
#pragma pack(pop)
