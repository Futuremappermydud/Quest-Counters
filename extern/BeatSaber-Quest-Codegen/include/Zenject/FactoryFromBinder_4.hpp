// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass1_0 because it is already included!
  // Skipping declaration: <>c__2`1 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Skipping declaration: ConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: IFactory`4<TParam1, TParam2, TParam3, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TValue>
  class IFactory_4;
  // Forward declaring type: FactorySubContainerBinder`4<TContract, TParam1, TParam2, TParam3>
  template<typename TContract, typename TParam1, typename TParam2, typename TParam3>
  class FactorySubContainerBinder_4;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`5<T1, T2, T3, T4, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename TResult>
  class Func_5;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder`4
  template<typename TParam1, typename TParam2, typename TParam3, typename TContract>
  class FactoryFromBinder_4 : public Zenject::FactoryFromBinderBase {
    public:
    // Nested type: Zenject::FactoryFromBinder_4::$$c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>
    class $$c__DisplayClass1_0;
    // Nested type: Zenject::FactoryFromBinder_4::$$c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>
    template<typename TSubFactory>
    class $$c__2_1;
    // Autogenerated type: Zenject.FactoryFromBinder`4/<>c__DisplayClass1_0
    class $$c__DisplayClass1_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*;
      // public System.Func`5<Zenject.DiContainer,TParam1,TParam2,TParam3,TContract> method
      // Offset: 0x0
      System::Func_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>* method;
      // Creating conversion operator: operator System::Func_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>*
      constexpr operator System::Func_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>*() const noexcept {
        return method;
      }
      // Zenject.IProvider <FromMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $FromMethod$b__0(Zenject::DiContainer* container) {
        return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromMethod>b__0", container)));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__DisplayClass1_0* New_ctor() {
        return (typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__DisplayClass1_0*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__DisplayClass1_0*>::get())));
      }
    }; // Zenject.FactoryFromBinder`4/<>c__DisplayClass1_0
    // Autogenerated type: Zenject.FactoryFromBinder`4/<>c__2`1
    template<typename TSubFactory>
    class $$c__2_1 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      static_assert((!std::is_complete_v<std::remove_pointer_t<TSubFactory>> || std::is_base_of_v<Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>, std::remove_pointer_t<TSubFactory>>));
      public:
      using declaring_type = FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*;
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.FactoryFromBinder`4/<>c__2`1<TParam1,TParam2,TParam3,TContract,TSubFactory> <>9
      static typename Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>* _get_$$9() {
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.FactoryFromBinder`4/<>c__2`1<TParam1,TParam2,TParam3,TContract,TSubFactory> <>9
      static void _set_$$9(typename Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>* value) {
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`4<TParam1,TParam2,TParam3,TContract>>> <>9__2_0
      static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>* _get_$$9__2_0() {
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`4<TParam1,TParam2,TParam3,TContract>>> <>9__2_0
      static void _set_$$9__2_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>* value) {
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>::get(), ".cctor")));
      }
      // System.Void <FromFactory>b__2_0(Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`4<TParam1,TParam2,TParam3,TContract>> x)
      // Offset: 0xFFFFFFFF
      void $FromFactory$b__2_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>* x) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "<FromFactory>b__2_0", x));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>* New_ctor() {
        return (typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>::get())));
      }
    }; // Zenject.FactoryFromBinder`4/<>c__2`1
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    static FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>* New_ctor(Zenject::DiContainer* container, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      return (FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*>::get(), container, bindInfo, factoryBindInfo)));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromMethod(System.Func`5<Zenject.DiContainer,TParam1,TParam2,TParam3,TContract> method)
    // Offset: 0xFFFFFFFF
    Zenject::ConditionCopyNonLazyBinder* FromMethod(System::Func_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>* method) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::ConditionCopyNonLazyBinder*>(this, "FromMethod", method));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromFactory()
    // Offset: 0xFFFFFFFF
    template<class TSubFactory>
    Zenject::ConditionCopyNonLazyBinder* FromFactory() {
      static_assert(std::is_base_of_v<Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>, std::remove_pointer_t<TSubFactory>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ConditionCopyNonLazyBinder*>(this, "FromFactory", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()})));
    }
    // public Zenject.FactorySubContainerBinder`4<TParam1,TParam2,TParam3,TContract> FromSubContainerResolve()
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>* FromSubContainerResolve() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>*>(this, "FromSubContainerResolve")));
    }
    // public Zenject.FactorySubContainerBinder`4<TParam1,TParam2,TParam3,TContract> FromSubContainerResolve(System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>* FromSubContainerResolve(::Il2CppObject* subIdentifier) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>*>(this, "FromSubContainerResolve", subIdentifier)));
    }
  }; // Zenject.FactoryFromBinder`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder_4, "Zenject", "FactoryFromBinder`4");
#pragma pack(pop)
