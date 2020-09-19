// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: NUnit.Framework.Internal.Filters.CompositeFilter
#include "NUnit/Framework/Internal/Filters/CompositeFilter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITestFilter because it is already included!
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Autogenerated type: NUnit.Framework.Internal.Filters.OrFilter
  class OrFilter : public NUnit::Framework::Internal::Filters::CompositeFilter {
    public:
    // public System.Void .ctor()
    // Offset: 0x108CCE4
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Void CompositeFilter::.ctor()
    // Base method: System.Void TestFilter::.ctor()
    // Base method: System.Void Object::.ctor()
    static OrFilter* New_ctor();
    // public System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    // Offset: 0x108CCE8
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Void CompositeFilter::.ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    static OrFilter* New_ctor(::Array<NUnit::Framework::Interfaces::ITestFilter*>* filters);
    // Creating initializer_list -> params proxy for: System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    static OrFilter* New_ctor(std::initializer_list<NUnit::Framework::Interfaces::ITestFilter*> filters);
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    template<class ...TParams>
    static OrFilter* New_ctor(TParams&&... filters) {
      return New_ctor({filters...});
    }
    // public override System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x108CCEC
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x108D038
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x108D354
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
    // protected override System.String get_ElementName()
    // Offset: 0x108D670
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.String CompositeFilter::get_ElementName()
    ::Il2CppString* get_ElementName();
  }; // NUnit.Framework.Internal.Filters.OrFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Filters::OrFilter*, "NUnit.Framework.Internal.Filters", "OrFilter");
#pragma pack(pop)