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
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.ISimpleTestBuilder
  class ISimpleTestBuilder {
    public:
    // public NUnit.Framework.Internal.TestMethod BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Internal::TestMethod* BuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* suite);
  }; // NUnit.Framework.Interfaces.ISimpleTestBuilder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ISimpleTestBuilder*, "NUnit.Framework.Interfaces", "ISimpleTestBuilder");
#pragma pack(pop)
