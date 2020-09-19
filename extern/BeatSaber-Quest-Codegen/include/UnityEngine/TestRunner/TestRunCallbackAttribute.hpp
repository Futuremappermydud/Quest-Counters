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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine::TestRunner
namespace UnityEngine::TestRunner {
  // Forward declaring type: ITestRunCallback
  class ITestRunCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner
namespace UnityEngine::TestRunner {
  // Autogenerated type: UnityEngine.TestRunner.TestRunCallbackAttribute
  class TestRunCallbackAttribute : public System::Attribute {
    public:
    // private System.Type m_Type
    // Offset: 0x10
    System::Type* m_Type;
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return m_Type;
    }
    // UnityEngine.TestRunner.ITestRunCallback ConstructCallback()
    // Offset: 0xE3E6B0
    UnityEngine::TestRunner::ITestRunCallback* ConstructCallback();
  }; // UnityEngine.TestRunner.TestRunCallbackAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestRunCallbackAttribute*, "UnityEngine.TestRunner", "TestRunCallbackAttribute");
#pragma pack(pop)