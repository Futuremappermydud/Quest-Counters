// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: NUnitEqualityComparer
  class NUnitEqualityComparer;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.CollectionTally
  class CollectionTally : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.List`1<System.Object> list
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppObject*>* list;
    // private readonly NUnit.Framework.Constraints.NUnitEqualityComparer comparer
    // Offset: 0x18
    NUnit::Framework::Constraints::NUnitEqualityComparer* comparer;
    // public System.Void .ctor(NUnit.Framework.Constraints.NUnitEqualityComparer comparer, System.Collections.IEnumerable c)
    // Offset: 0x1074C1C
    static CollectionTally* New_ctor(NUnit::Framework::Constraints::NUnitEqualityComparer* comparer, System::Collections::IEnumerable* c);
    // public System.Int32 get_Count()
    // Offset: 0x1074F04
    int get_Count();
    // private System.Boolean ItemsEqual(System.Object expected, System.Object actual)
    // Offset: 0x1074F54
    bool ItemsEqual(::Il2CppObject* expected, ::Il2CppObject* actual);
    // public System.Boolean TryRemove(System.Object o)
    // Offset: 0x1075C84
    bool TryRemove(::Il2CppObject* o);
    // public System.Boolean TryRemove(System.Collections.IEnumerable c)
    // Offset: 0x1075D50
    bool TryRemove(System::Collections::IEnumerable* c);
  }; // NUnit.Framework.Constraints.CollectionTally
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::CollectionTally*, "NUnit.Framework.Constraints", "CollectionTally");
#pragma pack(pop)
