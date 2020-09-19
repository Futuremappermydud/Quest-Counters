// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.SparselyPopulatedArrayFragment`1
  template<typename T>
  class SparselyPopulatedArrayFragment_1 : public ::Il2CppObject {
    public:
    // readonly T[] m_elements
    // Offset: 0x0
    ::Array<T>* m_elements;
    // System.Int32 m_freeCount
    // Offset: 0x0
    int m_freeCount;
    // System.Threading.SparselyPopulatedArrayFragment`1<T> m_next
    // Offset: 0x0
    System::Threading::SparselyPopulatedArrayFragment_1<T>* m_next;
    // System.Threading.SparselyPopulatedArrayFragment`1<T> m_prev
    // Offset: 0x0
    System::Threading::SparselyPopulatedArrayFragment_1<T>* m_prev;
    // System.Void .ctor(System.Int32 size)
    // Offset: 0xFFFFFFFF
    static SparselyPopulatedArrayFragment_1<T>* New_ctor(int size) {
      return (SparselyPopulatedArrayFragment_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SparselyPopulatedArrayFragment_1<T>*>::get(), size));
    }
    // System.Void .ctor(System.Int32 size, System.Threading.SparselyPopulatedArrayFragment`1<T> prev)
    // Offset: 0xFFFFFFFF
    static SparselyPopulatedArrayFragment_1<T>* New_ctor(int size, System::Threading::SparselyPopulatedArrayFragment_1<T>* prev) {
      return (SparselyPopulatedArrayFragment_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SparselyPopulatedArrayFragment_1<T>*>::get(), size, prev));
    }
    // T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T get_Item(int index) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_Item", index));
    }
    // System.Int32 get_Length()
    // Offset: 0xFFFFFFFF
    int get_Length() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Length"));
    }
    // System.Threading.SparselyPopulatedArrayFragment`1<T> get_Prev()
    // Offset: 0xFFFFFFFF
    System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Prev() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SparselyPopulatedArrayFragment_1<T>*>(this, "get_Prev"));
    }
    // T SafeAtomicRemove(System.Int32 index, T expectedElement)
    // Offset: 0xFFFFFFFF
    T SafeAtomicRemove(int index, T expectedElement) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "SafeAtomicRemove", index, expectedElement));
    }
  }; // System.Threading.SparselyPopulatedArrayFragment`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::SparselyPopulatedArrayFragment_1, "System.Threading", "SparselyPopulatedArrayFragment`1");
#pragma pack(pop)
