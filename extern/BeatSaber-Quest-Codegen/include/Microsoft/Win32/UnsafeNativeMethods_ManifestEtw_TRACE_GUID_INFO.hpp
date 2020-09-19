// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO
  struct UnsafeNativeMethods::ManifestEtw::TRACE_GUID_INFO : public System::ValueType {
    public:
    // public System.Int32 InstanceCount
    // Offset: 0x0
    int InstanceCount;
    // public System.Int32 Reserved
    // Offset: 0x4
    int Reserved;
    // Creating value type constructor for type: TRACE_GUID_INFO
    constexpr TRACE_GUID_INFO(int InstanceCount_ = {}, int Reserved_ = {}) noexcept : InstanceCount{InstanceCount_}, Reserved{Reserved_} {}
  }; // Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::TRACE_GUID_INFO, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO");
#pragma pack(pop)
