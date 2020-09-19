// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Array/SorterObjectArray
  struct Array::SorterObjectArray : public System::ValueType {
    public:
    // private System.Object[] keys
    // Offset: 0x0
    ::Array<::Il2CppObject*>* keys;
    // private System.Object[] items
    // Offset: 0x8
    ::Array<::Il2CppObject*>* items;
    // private System.Collections.IComparer comparer
    // Offset: 0x10
    System::Collections::IComparer* comparer;
    // Creating value type constructor for type: SorterObjectArray
    constexpr SorterObjectArray(::Array<::Il2CppObject*>* keys_ = {}, ::Array<::Il2CppObject*>* items_ = {}, System::Collections::IComparer* comparer_ = {}) noexcept : keys{keys_}, items{items_}, comparer{comparer_} {}
    // System.Void .ctor(System.Object[] keys, System.Object[] items, System.Collections.IComparer comparer)
    // Offset: 0xA46144
    static Array::SorterObjectArray* New_ctor(::Array<::Il2CppObject*>* keys, ::Array<::Il2CppObject*>* items, System::Collections::IComparer* comparer);
    // System.Void SwapIfGreaterWithItems(System.Int32 a, System.Int32 b)
    // Offset: 0xA4614C
    void SwapIfGreaterWithItems(int a, int b);
    // private System.Void Swap(System.Int32 i, System.Int32 j)
    // Offset: 0xA46154
    void Swap(int i, int j);
    // System.Void Sort(System.Int32 left, System.Int32 length)
    // Offset: 0xA4615C
    void Sort(int left, int length);
    // private System.Void IntrospectiveSort(System.Int32 left, System.Int32 length)
    // Offset: 0xA46164
    void IntrospectiveSort(int left, int length);
    // private System.Void IntroSort(System.Int32 lo, System.Int32 hi, System.Int32 depthLimit)
    // Offset: 0xA4616C
    void IntroSort(int lo, int hi, int depthLimit);
    // private System.Int32 PickPivotAndPartition(System.Int32 lo, System.Int32 hi)
    // Offset: 0xA46174
    int PickPivotAndPartition(int lo, int hi);
    // private System.Void Heapsort(System.Int32 lo, System.Int32 hi)
    // Offset: 0xA4617C
    void Heapsort(int lo, int hi);
    // private System.Void DownHeap(System.Int32 i, System.Int32 n, System.Int32 lo)
    // Offset: 0xA46184
    void DownHeap(int i, int n, int lo);
    // private System.Void InsertionSort(System.Int32 lo, System.Int32 hi)
    // Offset: 0xA4618C
    void InsertionSort(int lo, int hi);
  }; // System.Array/SorterObjectArray
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Array::SorterObjectArray, "System", "Array/SorterObjectArray");
#pragma pack(pop)
