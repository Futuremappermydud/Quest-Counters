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
  // Autogenerated type: JetBrains.Annotations.PathReferenceAttribute
  class PathReferenceAttribute : public System::Attribute {
    public:
    // private System.String <BasePath>k__BackingField
    // Offset: 0x10
    ::Il2CppString* BasePath;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return BasePath;
    }
    // public System.Void .ctor(System.String basePath)
    // Offset: 0x1961578
    static PathReferenceAttribute* New_ctor(::Il2CppString* basePath);
    // public System.String get_BasePath()
    // Offset: 0x19615AC
    ::Il2CppString* get_BasePath();
    // private System.Void set_BasePath(System.String value)
    // Offset: 0x19615B4
    void set_BasePath(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1961570
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static PathReferenceAttribute* New_ctor();
  }; // JetBrains.Annotations.PathReferenceAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::PathReferenceAttribute*, "JetBrains.Annotations", "PathReferenceAttribute");
#pragma pack(pop)
