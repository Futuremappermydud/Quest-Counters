// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AddComponentMenu
  class AddComponentMenu : public System::Attribute {
    public:
    // private System.String m_AddComponentMenu
    // Offset: 0x10
    ::Il2CppString* m_AddComponentMenu;
    // private System.Int32 m_Ordering
    // Offset: 0x18
    int m_Ordering;
    // public System.Void .ctor(System.String menuName)
    // Offset: 0x1302BD0
    static AddComponentMenu* New_ctor(::Il2CppString* menuName);
    // public System.Void .ctor(System.String menuName, System.Int32 order)
    // Offset: 0x1302C0C
    static AddComponentMenu* New_ctor(::Il2CppString* menuName, int order);
  }; // UnityEngine.AddComponentMenu
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddComponentMenu*, "UnityEngine", "AddComponentMenu");
#pragma pack(pop)
