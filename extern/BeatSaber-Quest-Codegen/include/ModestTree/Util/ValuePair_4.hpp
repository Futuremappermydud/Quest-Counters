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
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Autogenerated type: ModestTree.Util.ValuePair`4
  template<typename T1, typename T2, typename T3, typename T4>
  class ValuePair_4 : public ::Il2CppObject {
    public:
    // public readonly T1 First
    // Offset: 0x0
    T1 First;
    // public readonly T2 Second
    // Offset: 0x0
    T2 Second;
    // public readonly T3 Third
    // Offset: 0x0
    T3 Third;
    // public readonly T4 Fourth
    // Offset: 0x0
    T4 Fourth;
    // public System.Void .ctor(T1 first, T2 second, T3 third, T4 fourth)
    // Offset: 0xFFFFFFFF
    static ValuePair_4<T1, T2, T3, T4>* New_ctor(T1 first, T2 second, T3 third, T4 fourth) {
      return (ValuePair_4<T1, T2, T3, T4>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ValuePair_4<T1, T2, T3, T4>*>::get(), first, second, third, fourth)));
    }
    // public System.Boolean Equals(ModestTree.Util.ValuePair`4<T1,T2,T3,T4> that)
    // Offset: 0xFFFFFFFF
    bool Equals(ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* that) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", that));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ValuePair_4<T1, T2, T3, T4>* New_ctor() {
      return (ValuePair_4<T1, T2, T3, T4>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ValuePair_4<T1, T2, T3, T4>*>::get())));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
    }
  }; // ModestTree.Util.ValuePair`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(ModestTree::Util::ValuePair_4, "ModestTree.Util", "ValuePair`4");
#pragma pack(pop)