// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/CompositeWorkItem.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem/UnityWorkItemOrderComparer
  class CompositeWorkItem::UnityWorkItemOrderComparer : public ::Il2CppObject, public System::Collections::Generic::IComparer_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*> {
    public:
    // public System.Int32 Compare(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem x, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem y)
    // Offset: 0xE341C0
    // Implemented from: System.Collections.Generic.IComparer`1
    // Base method: System.Int32 IComparer`1::Compare(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem x, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem y)
    int Compare(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* x, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* y);
    // public System.Void .ctor()
    // Offset: 0xE31E20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CompositeWorkItem::UnityWorkItemOrderComparer* New_ctor();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem/UnityWorkItemOrderComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "CompositeWorkItem/UnityWorkItemOrderComparer");
#pragma pack(pop)