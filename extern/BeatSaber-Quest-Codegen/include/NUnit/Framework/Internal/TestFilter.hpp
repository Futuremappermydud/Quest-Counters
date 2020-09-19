// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITestFilter
#include "NUnit/Framework/Interfaces/ITestFilter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestFilter
  class TestFilter : public ::Il2CppObject, public NUnit::Framework::Interfaces::ITestFilter {
    public:
    // Nested type: NUnit::Framework::Internal::TestFilter::EmptyFilter
    class EmptyFilter;
    // Get static field: static public readonly NUnit.Framework.Internal.TestFilter Empty
    static NUnit::Framework::Internal::TestFilter* _get_Empty();
    // Set static field: static public readonly NUnit.Framework.Internal.TestFilter Empty
    static void _set_Empty(NUnit::Framework::Internal::TestFilter* value);
    // public System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // public System.Boolean MatchParent(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18F4458
    bool MatchParent(NUnit::Framework::Interfaces::ITest* test);
    // protected System.Boolean MatchDescendant(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18F4668
    bool MatchDescendant(NUnit::Framework::Interfaces::ITest* test);
    // static private System.Void .cctor()
    // Offset: 0x18F4ACC
    static void _cctor();
    // public System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18F43F8
    // Implemented from: NUnit.Framework.Interfaces.ITestFilter
    // Base method: System.Boolean ITestFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18F4618
    // Implemented from: NUnit.Framework.Interfaces.ITestFilter
    // Base method: System.Boolean ITestFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x18F4A3C
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::ToXml(System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // protected System.Void .ctor()
    // Offset: 0x18F4AC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestFilter* New_ctor();
  }; // NUnit.Framework.Internal.TestFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestFilter*, "NUnit.Framework.Internal", "TestFilter");
#pragma pack(pop)
