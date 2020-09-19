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
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`1<TParam1>
  template<typename TParam1>
  class IPoolable_1;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`2<TValue, TParam1>
  template<typename TValue, typename TParam1>
  class MemoryPool_2;
  // Forward declaring type: ArgConditionCopyNonLazyBinder
  class ArgConditionCopyNonLazyBinder;
  // Forward declaring type: FactoryFromBinder`1<TContract>
  template<typename TContract>
  class FactoryFromBinder_1;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: IFactory`1<TValue>
  template<typename TValue>
  class IFactory_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder0Extensions
  class FactoryFromBinder0Extensions : public ::Il2CppObject {
    public:
    // Nested type: Zenject::FactoryFromBinder0Extensions::$$c__DisplayClass0_0_2<TContract, TMemoryPool>
    template<typename TContract, typename TMemoryPool>
    class $$c__DisplayClass0_0_2;
    // Nested type: Zenject::FactoryFromBinder0Extensions::$$c__1_1<TContract>
    template<typename TContract>
    class $$c__1_1;
    // Nested type: Zenject::FactoryFromBinder0Extensions::$$c__3_1<TContract>
    template<typename TContract>
    class $$c__3_1;
    // Nested type: Zenject::FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>
    template<typename TContract, typename TMemoryPool>
    class $$c__5_2;
    // Nested type: Zenject::FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1<TContract>
    template<typename TContract>
    class $$c__DisplayClass6_0_1;
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`1<TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_1<Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_2<Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder0Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, fromBinder, poolBindGenerator)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`1<TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_1<Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder0Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`1<TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_1<Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder0Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder, poolBindGenerator)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`1<TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract>* fromBinder) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_1<Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder0Extensions", "FromMonoPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`1<TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_1<Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder0Extensions", "FromMonoPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder, poolBindGenerator)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`1<TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_1<TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_1<Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_2<Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder0Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, fromBinder)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromIFactory(Zenject.FactoryFromBinder`1<TContract> fromBinder, System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`1<TContract>>> factoryBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromIFactory(Zenject::FactoryFromBinder_1<TContract>* fromBinder, System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder0Extensions", "FromIFactory", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder, factoryBindGenerator)));
    }
  }; // Zenject.FactoryFromBinder0Extensions
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinder0Extensions*, "Zenject", "FactoryFromBinder0Extensions");
#pragma pack(pop)