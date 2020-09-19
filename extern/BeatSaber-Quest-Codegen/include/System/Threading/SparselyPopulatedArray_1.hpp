// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.SparselyPopulatedArrayAddInfo`1
#include "System/Threading/SparselyPopulatedArrayAddInfo_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SparselyPopulatedArrayFragment`1<T>
  template<typename T>
  class SparselyPopulatedArrayFragment_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.SparselyPopulatedArray`1
  template<typename T>
  class SparselyPopulatedArray_1 : public ::Il2CppObject {
    public:
    // private System.Threading.SparselyPopulatedArrayFragment`1<T> m_tail
    // Offset: 0x0
    System::Threading::SparselyPopulatedArrayFragment_1<T>* m_tail;
    // Creating conversion operator: operator System::Threading::SparselyPopulatedArrayFragment_1<T>*
    constexpr operator System::Threading::SparselyPopulatedArrayFragment_1<T>*() const noexcept {
      return m_tail;
    }
    // System.Void .ctor(System.Int32 initialSize)
    // Offset: 0xFFFFFFFF
    static SparselyPopulatedArray_1<T>* New_ctor(int initialSize) {
      return (SparselyPopulatedArray_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SparselyPopulatedArray_1<T>*>::get(), initialSize));
    }
    // System.Threading.SparselyPopulatedArrayFragment`1<T> get_Tail()
    // Offset: 0xFFFFFFFF
    System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Tail() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SparselyPopulatedArrayFragment_1<T>*>(this, "get_Tail"));
    }
    // System.Threading.SparselyPopulatedArrayAddInfo`1<T> Add(T element)
    // Offset: 0xFFFFFFFF
    System::Threading::SparselyPopulatedArrayAddInfo_1<T> Add(T element) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SparselyPopulatedArrayAddInfo_1<T>>(this, "Add", element));
    }
  }; // System.Threading.SparselyPopulatedArray`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::SparselyPopulatedArray_1, "System.Threading", "SparselyPopulatedArray`1");
#pragma pack(pop)
