// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.SortedList
#include "System/Collections/SortedList.hpp"
// Completed includes
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.SortedList/ValueList
  class SortedList::ValueList : public ::Il2CppObject {
    public:
    // private System.Collections.SortedList sortedList
    // Offset: 0x10
    System::Collections::SortedList* sortedList;
    // Creating conversion operator: operator System::Collections::SortedList*
    constexpr operator System::Collections::SortedList*() const noexcept {
      return sortedList;
    }
  }; // System.Collections.SortedList/ValueList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::SortedList::ValueList*, "System.Collections", "SortedList/ValueList");
#pragma pack(pop)
