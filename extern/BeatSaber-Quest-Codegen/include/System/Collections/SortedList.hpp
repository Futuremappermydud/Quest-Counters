// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
  // Forward declaring type: IList
  class IList;
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.SortedList
  class SortedList : public ::Il2CppObject, public System::Collections::IDictionary, public System::ICloneable {
    public:
    // Nested type: System::Collections::SortedList::SortedListEnumerator
    class SortedListEnumerator;
    // Nested type: System::Collections::SortedList::KeyList
    class KeyList;
    // Nested type: System::Collections::SortedList::ValueList
    class ValueList;
    // Nested type: System::Collections::SortedList::SortedListDebugView
    class SortedListDebugView;
    // private System.Object[] keys
    // Offset: 0x10
    ::Array<::Il2CppObject*>* keys;
    // private System.Object[] values
    // Offset: 0x18
    ::Array<::Il2CppObject*>* values;
    // private System.Int32 _size
    // Offset: 0x20
    int size;
    // private System.Int32 version
    // Offset: 0x24
    int version;
    // private System.Collections.IComparer comparer
    // Offset: 0x28
    System::Collections::IComparer* comparer;
    // private System.Collections.SortedList/KeyList keyList
    // Offset: 0x30
    System::Collections::SortedList::KeyList* keyList;
    // private System.Collections.SortedList/ValueList valueList
    // Offset: 0x38
    System::Collections::SortedList::ValueList* valueList;
    // private System.Object _syncRoot
    // Offset: 0x40
    ::Il2CppObject* syncRoot;
    // static field const value: static private System.Int32 _defaultCapacity
    static constexpr const int _defaultCapacity = 16;
    // Get static field: static private System.Int32 _defaultCapacity
    static int _get__defaultCapacity();
    // Set static field: static private System.Int32 _defaultCapacity
    static void _set__defaultCapacity(int value);
    // Get static field: static private System.Object[] emptyArray
    static ::Array<::Il2CppObject*>* _get_emptyArray();
    // Set static field: static private System.Object[] emptyArray
    static void _set_emptyArray(::Array<::Il2CppObject*>* value);
    // private System.Void Init()
    // Offset: 0x10C0878
    void Init();
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x10C0974
    static SortedList* New_ctor(int initialCapacity);
    // public System.Void .ctor(System.Collections.IComparer comparer)
    // Offset: 0x10C0ACC
    static SortedList* New_ctor(System::Collections::IComparer* comparer);
    // public System.Void .ctor(System.Collections.IComparer comparer, System.Int32 capacity)
    // Offset: 0x10C0B18
    static SortedList* New_ctor(System::Collections::IComparer* comparer, int capacity);
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0x10C0B50
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Int32 get_Capacity()
    // Offset: 0x10C0E44
    int get_Capacity();
    // public System.Void set_Capacity(System.Int32 value)
    // Offset: 0x10C0E60
    void set_Capacity(int value);
    // private System.Void EnsureCapacity(System.Int32 min)
    // Offset: 0x10C13B4
    void EnsureCapacity(int min);
    // public System.Object GetByIndex(System.Int32 index)
    // Offset: 0x10C1400
    ::Il2CppObject* GetByIndex(int index);
    // public System.Object GetKey(System.Int32 index)
    // Offset: 0x10C1660
    ::Il2CppObject* GetKey(int index);
    // public System.Collections.IList GetKeyList()
    // Offset: 0x10C1754
    System::Collections::IList* GetKeyList();
    // public System.Int32 IndexOfKey(System.Object key)
    // Offset: 0x10C19D8
    int IndexOfKey(::Il2CppObject* key);
    // private System.Void Insert(System.Int32 index, System.Object key, System.Object value)
    // Offset: 0x10C0CF8
    void Insert(int index, ::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x10C1AA8
    void RemoveAt(int index);
    // static private System.Void .cctor()
    // Offset: 0x10C1C2C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x10C0850
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SortedList* New_ctor();
    // public System.Int32 get_Count()
    // Offset: 0x10C1038
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Collections.ICollection get_Keys()
    // Offset: 0x10C1040
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.ICollection IDictionary::get_Keys()
    System::Collections::ICollection* get_Keys();
    // Creating proxy method: System_Collections_IDictionary_get_Keys
    // Maps to method: get_Keys
    System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
    // public System.Object Clone()
    // Offset: 0x10C1050
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x10C111C
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Boolean IDictionary::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_Contains
    // Maps to method: Contains
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x10C1144
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 arrayIndex)
    void CopyTo(System::Array* array, int arrayIndex);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int arrayIndex);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x10C14F4
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x10C15E8
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.IDictionaryEnumerator IDictionary::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IDictionary_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
    // public System.Object get_Item(System.Object key)
    // Offset: 0x10C181C
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Object IDictionary::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x10C1880
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_set_Item
    // Maps to method: set_Item
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
  }; // System.Collections.SortedList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::SortedList*, "System.Collections", "SortedList");
#pragma pack(pop)
