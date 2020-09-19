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
  // Forward declaring type: ArgConditionCopyNonLazyBinder
  class ArgConditionCopyNonLazyBinder;
  // Forward declaring type: FactoryFromBinder`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
  class FactoryFromBinder_7;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: IFactory`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
  class IFactory_7;
  // Forward declaring type: IPoolable`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  class IPoolable_7;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
  // Forward declaring type: MemoryPool`8<TValue, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  class MemoryPool_8;
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
  // Autogenerated type: Zenject.FactoryFromBinder6Extensions
  class FactoryFromBinder6Extensions : public ::Il2CppObject {
    public:
    // Nested type: Zenject::FactoryFromBinder6Extensions::$$c__DisplayClass0_0_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
    class $$c__DisplayClass0_0_7;
    // Nested type: Zenject::FactoryFromBinder6Extensions::$$c__1_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
    class $$c__1_7;
    // Nested type: Zenject::FactoryFromBinder6Extensions::$$c__3_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
    class $$c__3_7;
    // Nested type: Zenject::FactoryFromBinder6Extensions::$$c__5_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
    class $$c__5_8;
    // Nested type: Zenject::FactoryFromBinder6Extensions::$$c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
    class $$c__DisplayClass6_0_8;
    // static public Zenject.ArgConditionCopyNonLazyBinder FromIFactory(Zenject.FactoryFromBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> fromBinder, System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>>> factoryBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromIFactory(Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder, System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>* factoryBindGenerator) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder6Extensions", "FromIFactory", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder, factoryBindGenerator)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder6Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder6Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder, poolBindGenerator)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder6Extensions", "FromMonoPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder6Extensions", "FromMonoPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, fromBinder, poolBindGenerator)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6, class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder6Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, fromBinder)));
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6, class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ArgConditionCopyNonLazyBinder*>("Zenject", "FactoryFromBinder6Extensions", "FromPoolableMemoryPool", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, fromBinder, poolBindGenerator)));
    }
  }; // Zenject.FactoryFromBinder6Extensions
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinder6Extensions*, "Zenject", "FactoryFromBinder6Extensions");
#pragma pack(pop)