// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ThreadPoolWorkQueue
#include "System/Threading/ThreadPoolWorkQueue.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue/SparseArray`1
  template<typename T>
  class ThreadPoolWorkQueue::SparseArray_1 : public ::Il2CppObject {
    public:
    // private T[] m_array
    // Offset: 0x0
    ::Array<T>* m_array;
    // Creating conversion operator: operator ::Array<T>*
    constexpr operator ::Array<T>*() const noexcept {
      return m_array;
    }
    // System.Void .ctor(System.Int32 initialSize)
    // Offset: 0xFFFFFFFF
    static ThreadPoolWorkQueue::SparseArray_1<T>* New_ctor(int initialSize) {
      return (ThreadPoolWorkQueue::SparseArray_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ThreadPoolWorkQueue::SparseArray_1<T>*>::get(), initialSize));
    }
    // T[] get_Current()
    // Offset: 0xFFFFFFFF
    ::Array<T>* get_Current() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<T>*>(this, "get_Current"));
    }
    // System.Int32 Add(T e)
    // Offset: 0xFFFFFFFF
    int Add(T e) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Add", e));
    }
    // System.Void Remove(T e)
    // Offset: 0xFFFFFFFF
    void Remove(T e) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Remove", e));
    }
  }; // System.Threading.ThreadPoolWorkQueue/SparseArray`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::ThreadPoolWorkQueue::SparseArray_1, "System.Threading", "ThreadPoolWorkQueue/SparseArray`1");
#pragma pack(pop)
