// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`1
#include "Zenject/IMemoryPool_1.hpp"
// Including type: Zenject.IFactory`1
#include "Zenject/IFactory_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPool`1
  template<typename TValue>
  class MemoryPool_1 : public Zenject::MemoryPoolBase_1<TValue>, public Zenject::IMemoryPool_1<TValue>, public Zenject::IFactory_1<TValue> {
    public:
    // protected System.Void Reinitialize(TValue item)
    // Offset: 0xFFFFFFFF
    void Reinitialize(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", item));
    }
    // public TValue Spawn()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IMemoryPool`1
    // Base method: TValue IMemoryPool`1::Spawn()
    TValue Spawn() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn"));
    }
    // private TValue Zenject.IFactory<TValue>.Create()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`1
    // Base method: TValue IFactory`1::Create()
    TValue Zenject_IFactory_1_Create() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<TValue>(this, "Zenject.IFactory<TValue>.Create")));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MemoryPool_1<TValue>* New_ctor() {
      return (MemoryPool_1<TValue>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPool_1<TValue>*>::get()));
    }
  }; // Zenject.MemoryPool`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_1, "Zenject", "MemoryPool`1");
#pragma pack(pop)