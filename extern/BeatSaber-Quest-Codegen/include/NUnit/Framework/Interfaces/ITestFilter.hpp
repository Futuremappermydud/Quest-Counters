// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NUnit.Framework.Interfaces.IXmlNodeBuilder
#include "NUnit/Framework/Interfaces/IXmlNodeBuilder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.ITestFilter
  class ITestFilter : public NUnit::Framework::Interfaces::IXmlNodeBuilder {
    public:
    // public System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
  }; // NUnit.Framework.Interfaces.ITestFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITestFilter*, "NUnit.Framework.Interfaces", "ITestFilter");
#pragma pack(pop)
