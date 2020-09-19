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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.HtmlAttributeValueAttribute
  class HtmlAttributeValueAttribute : public System::Attribute {
    public:
    // private System.String <Name>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Name;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Name;
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x1961278
    static HtmlAttributeValueAttribute* New_ctor(::Il2CppString* name);
    // public System.String get_Name()
    // Offset: 0x19612AC
    ::Il2CppString* get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x19612B4
    void set_Name(::Il2CppString* value);
  }; // JetBrains.Annotations.HtmlAttributeValueAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::HtmlAttributeValueAttribute*, "JetBrains.Annotations", "HtmlAttributeValueAttribute");
#pragma pack(pop)
