// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PoolableMemoryPoolProviderBase`1
#include "Zenject/PoolableMemoryPoolProviderBase_1.hpp"
// Including type: Zenject.IValidatable
#include "Zenject/IValidatable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  class IPoolable_7;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`8<TValue, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  class MemoryPool_8;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableMemoryPoolProvider`8
  template<typename TContract, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TMemoryPool>
  class PoolableMemoryPoolProvider_8 : public Zenject::PoolableMemoryPoolProviderBase_1<TContract>, public Zenject::IValidatable {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TContract>> || std::is_base_of_v<Zenject::IPoolable_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>));
    static_assert((!std::is_complete_v<std::remove_pointer_t<TMemoryPool>> || std::is_base_of_v<Zenject::MemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>));
    public:
    // private TMemoryPool _pool
    // Offset: 0x0
    TMemoryPool pool;
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid poolId)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PoolableMemoryPoolProviderBase`1
    // Base method: System.Void PoolableMemoryPoolProviderBase`1::.ctor(Zenject.DiContainer container, System.Guid poolId)
    static PoolableMemoryPoolProvider_8<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TMemoryPool>* New_ctor(Zenject::DiContainer* container, System::Guid poolId) {
      return (PoolableMemoryPoolProvider_8<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TMemoryPool>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableMemoryPoolProvider_8<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TMemoryPool>*>::get(), container, poolId)));
    }
    // public System.Void Validate()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IValidatable
    // Base method: System.Void IValidatable::Validate()
    void Validate() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Validate"));
    }
    // Creating proxy method: Zenject_IValidatable_Validate
    // Maps to method: Validate
    void Zenject_IValidatable_Validate() {
      Validate();
    }
    // public override System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PoolableMemoryPoolProviderBase`1
    // Base method: System.Void PoolableMemoryPoolProviderBase`1::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetAllInstancesWithInjectSplit", context, args, injectAction, buffer));
    }
  }; // Zenject.PoolableMemoryPoolProvider`8
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPoolProvider_8, "Zenject", "PoolableMemoryPoolProvider`8");
#pragma pack(pop)
