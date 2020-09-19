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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.ETextureType
  struct ETextureType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ETextureType
    constexpr ETextureType(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.ETextureType Invalid
    static constexpr const int Invalid = -1;
    // Get static field: static public OVR.OpenVR.ETextureType Invalid
    static OVR::OpenVR::ETextureType _get_Invalid();
    // Set static field: static public OVR.OpenVR.ETextureType Invalid
    static void _set_Invalid(OVR::OpenVR::ETextureType value);
    // static field const value: static public OVR.OpenVR.ETextureType DirectX
    static constexpr const int DirectX = 0;
    // Get static field: static public OVR.OpenVR.ETextureType DirectX
    static OVR::OpenVR::ETextureType _get_DirectX();
    // Set static field: static public OVR.OpenVR.ETextureType DirectX
    static void _set_DirectX(OVR::OpenVR::ETextureType value);
    // static field const value: static public OVR.OpenVR.ETextureType OpenGL
    static constexpr const int OpenGL = 1;
    // Get static field: static public OVR.OpenVR.ETextureType OpenGL
    static OVR::OpenVR::ETextureType _get_OpenGL();
    // Set static field: static public OVR.OpenVR.ETextureType OpenGL
    static void _set_OpenGL(OVR::OpenVR::ETextureType value);
    // static field const value: static public OVR.OpenVR.ETextureType Vulkan
    static constexpr const int Vulkan = 2;
    // Get static field: static public OVR.OpenVR.ETextureType Vulkan
    static OVR::OpenVR::ETextureType _get_Vulkan();
    // Set static field: static public OVR.OpenVR.ETextureType Vulkan
    static void _set_Vulkan(OVR::OpenVR::ETextureType value);
    // static field const value: static public OVR.OpenVR.ETextureType IOSurface
    static constexpr const int IOSurface = 3;
    // Get static field: static public OVR.OpenVR.ETextureType IOSurface
    static OVR::OpenVR::ETextureType _get_IOSurface();
    // Set static field: static public OVR.OpenVR.ETextureType IOSurface
    static void _set_IOSurface(OVR::OpenVR::ETextureType value);
    // static field const value: static public OVR.OpenVR.ETextureType DirectX12
    static constexpr const int DirectX12 = 4;
    // Get static field: static public OVR.OpenVR.ETextureType DirectX12
    static OVR::OpenVR::ETextureType _get_DirectX12();
    // Set static field: static public OVR.OpenVR.ETextureType DirectX12
    static void _set_DirectX12(OVR::OpenVR::ETextureType value);
    // static field const value: static public OVR.OpenVR.ETextureType DXGISharedHandle
    static constexpr const int DXGISharedHandle = 5;
    // Get static field: static public OVR.OpenVR.ETextureType DXGISharedHandle
    static OVR::OpenVR::ETextureType _get_DXGISharedHandle();
    // Set static field: static public OVR.OpenVR.ETextureType DXGISharedHandle
    static void _set_DXGISharedHandle(OVR::OpenVR::ETextureType value);
    // static field const value: static public OVR.OpenVR.ETextureType Metal
    static constexpr const int Metal = 6;
    // Get static field: static public OVR.OpenVR.ETextureType Metal
    static OVR::OpenVR::ETextureType _get_Metal();
    // Set static field: static public OVR.OpenVR.ETextureType Metal
    static void _set_Metal(OVR::OpenVR::ETextureType value);
  }; // OVR.OpenVR.ETextureType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ETextureType, "OVR.OpenVR", "ETextureType");
#pragma pack(pop)
