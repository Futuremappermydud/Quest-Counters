// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.ErrorWrapper
  class ErrorWrapper : public ::Il2CppObject {
    public:
    // private System.Int32 m_ErrorCode
    // Offset: 0x10
    int m_ErrorCode;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_ErrorCode;
    }
  }; // System.Runtime.InteropServices.ErrorWrapper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ErrorWrapper*, "System.Runtime.InteropServices", "ErrorWrapper");
#pragma pack(pop)
