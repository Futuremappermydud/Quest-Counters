// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.NUnitAttribute
#include "NUnit/Framework/NUnitAttribute.hpp"
// Including type: NUnit.Framework.Interfaces.ITestBuilder
#include "NUnit/Framework/Interfaces/ITestBuilder.hpp"
// Including type: NUnit.Framework.Interfaces.IApplyToTest
#include "NUnit/Framework/Interfaces/IApplyToTest.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal::Builders
namespace NUnit::Framework::Internal::Builders {
  // Forward declaring type: NUnitTestCaseBuilder
  class NUnitTestCaseBuilder;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ICombiningStrategy
  class ICombiningStrategy;
  // Forward declaring type: IParameterDataProvider
  class IParameterDataProvider;
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.CombiningStrategyAttribute
  class CombiningStrategyAttribute : public NUnit::Framework::NUnitAttribute, public NUnit::Framework::Interfaces::ITestBuilder, public NUnit::Framework::Interfaces::IApplyToTest {
    public:
    // private NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder _builder
    // Offset: 0x10
    NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder* builder;
    // private NUnit.Framework.Interfaces.ICombiningStrategy _strategy
    // Offset: 0x18
    NUnit::Framework::Interfaces::ICombiningStrategy* strategy;
    // private NUnit.Framework.Interfaces.IParameterDataProvider _dataProvider
    // Offset: 0x20
    NUnit::Framework::Interfaces::IParameterDataProvider* dataProvider;
    // protected System.Void .ctor(NUnit.Framework.Interfaces.ICombiningStrategy strategy, NUnit.Framework.Interfaces.IParameterDataProvider provider)
    // Offset: 0x1073F10
    static CombiningStrategyAttribute* New_ctor(NUnit::Framework::Interfaces::ICombiningStrategy* strategy, NUnit::Framework::Interfaces::IParameterDataProvider* provider);
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestMethod> BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    // Offset: 0x107405C
    // Implemented from: NUnit.Framework.Interfaces.ITestBuilder
    // Base method: System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestMethod> ITestBuilder::BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestMethod*>* BuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* suite);
    // public System.Void ApplyToTest(NUnit.Framework.Internal.Test test)
    // Offset: 0x1074ADC
    // Implemented from: NUnit.Framework.Interfaces.IApplyToTest
    // Base method: System.Void IApplyToTest::ApplyToTest(NUnit.Framework.Internal.Test test)
    void ApplyToTest(NUnit::Framework::Internal::Test* test);
  }; // NUnit.Framework.CombiningStrategyAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::CombiningStrategyAttribute*, "NUnit.Framework", "CombiningStrategyAttribute");
#pragma pack(pop)
