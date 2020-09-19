// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.ConstraintBuilder
#include "NUnit/Framework/Constraints/ConstraintBuilder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: IConstraint
  class IConstraint;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.ConstraintBuilder/ConstraintStack
  class ConstraintBuilder::ConstraintStack : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Stack`1<NUnit.Framework.Constraints.IConstraint> stack
    // Offset: 0x10
    System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::IConstraint*>* stack;
    // Creating conversion operator: operator System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::IConstraint*>*
    constexpr operator System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::IConstraint*>*() const noexcept {
      return stack;
    }
    // public NUnit.Framework.Constraints.IConstraint Pop()
    // Offset: 0x10767A0
    NUnit::Framework::Constraints::IConstraint* Pop();
  }; // NUnit.Framework.Constraints.ConstraintBuilder/ConstraintStack
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack*, "NUnit.Framework.Constraints", "ConstraintBuilder/ConstraintStack");
#pragma pack(pop)
