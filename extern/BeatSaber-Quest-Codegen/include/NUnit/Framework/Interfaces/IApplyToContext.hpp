// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.IApplyToContext
  class IApplyToContext {
    public:
    // public System.Void ApplyToContext(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xFFFFFFFF
    void ApplyToContext(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Interfaces.IApplyToContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::IApplyToContext*, "NUnit.Framework.Interfaces", "IApplyToContext");
#pragma pack(pop)
