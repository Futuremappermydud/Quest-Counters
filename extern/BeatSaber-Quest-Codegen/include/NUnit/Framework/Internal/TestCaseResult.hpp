// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestResult
#include "NUnit/Framework/Internal/TestResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITestResult because it is already included!
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestCaseResult
  class TestCaseResult : public NUnit::Framework::Internal::TestResult {
    public:
    // public System.Void .ctor(NUnit.Framework.Internal.TestMethod test)
    // Offset: 0x18F3C28
    static TestCaseResult* New_ctor(NUnit::Framework::Internal::TestMethod* test);
    // public override System.Int32 get_FailCount()
    // Offset: 0x18F3DC8
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_FailCount()
    int get_FailCount();
    // public override System.Int32 get_PassCount()
    // Offset: 0x18F3DFC
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_PassCount()
    int get_PassCount();
    // public override System.Int32 get_SkipCount()
    // Offset: 0x18F3E28
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_SkipCount()
    int get_SkipCount();
    // public override System.Int32 get_InconclusiveCount()
    // Offset: 0x18F3E54
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_InconclusiveCount()
    int get_InconclusiveCount();
    // public override System.Boolean get_HasChildren()
    // Offset: 0x18F3E80
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Boolean TestResult::get_HasChildren()
    bool get_HasChildren();
    // public override System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> get_Children()
    // Offset: 0x18F3E88
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> TestResult::get_Children()
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestResult*>* get_Children();
  }; // NUnit.Framework.Internal.TestCaseResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestCaseResult*, "NUnit.Framework.Internal", "TestCaseResult");
#pragma pack(pop)
