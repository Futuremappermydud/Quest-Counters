// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Autogenerated type: UnityEngine.Experimental.Rendering.TextureCreationFlags
  struct TextureCreationFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: TextureCreationFlags
    constexpr TextureCreationFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Experimental.Rendering.TextureCreationFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Experimental.Rendering.TextureCreationFlags None
    static UnityEngine::Experimental::Rendering::TextureCreationFlags _get_None();
    // Set static field: static public UnityEngine.Experimental.Rendering.TextureCreationFlags None
    static void _set_None(UnityEngine::Experimental::Rendering::TextureCreationFlags value);
    // static field const value: static public UnityEngine.Experimental.Rendering.TextureCreationFlags MipChain
    static constexpr const int MipChain = 1;
    // Get static field: static public UnityEngine.Experimental.Rendering.TextureCreationFlags MipChain
    static UnityEngine::Experimental::Rendering::TextureCreationFlags _get_MipChain();
    // Set static field: static public UnityEngine.Experimental.Rendering.TextureCreationFlags MipChain
    static void _set_MipChain(UnityEngine::Experimental::Rendering::TextureCreationFlags value);
    // static field const value: static public UnityEngine.Experimental.Rendering.TextureCreationFlags Crunch
    static constexpr const int Crunch = 64;
    // Get static field: static public UnityEngine.Experimental.Rendering.TextureCreationFlags Crunch
    static UnityEngine::Experimental::Rendering::TextureCreationFlags _get_Crunch();
    // Set static field: static public UnityEngine.Experimental.Rendering.TextureCreationFlags Crunch
    static void _set_Crunch(UnityEngine::Experimental::Rendering::TextureCreationFlags value);
  }; // UnityEngine.Experimental.Rendering.TextureCreationFlags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::TextureCreationFlags, "UnityEngine.Experimental.Rendering", "TextureCreationFlags");
#pragma pack(pop)