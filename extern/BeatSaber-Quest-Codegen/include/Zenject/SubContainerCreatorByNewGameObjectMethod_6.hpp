// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByNewGameObjectDynamicContext
#include "Zenject/SubContainerCreatorByNewGameObjectDynamicContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass2_0 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: GameObjectContext
  class GameObjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`7<T1, T2, T3, T4, T5, T6, T7>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  class Action_7;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectMethod`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  class SubContainerCreatorByNewGameObjectMethod_6 : public Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
    public:
    // Nested type: Zenject::SubContainerCreatorByNewGameObjectMethod_6::$$c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>
    class $$c__DisplayClass2_0;
    // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectMethod`6/<>c__DisplayClass2_0
    class $$c__DisplayClass2_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*;
      // public Zenject.SubContainerCreatorByNewGameObjectMethod`6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> <>4__this
      // Offset: 0x0
      Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* $$4__this;
      // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
      // Offset: 0x0
      System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
      // System.Void <AddInstallers>b__0(Zenject.DiContainer subContainer)
      // Offset: 0xFFFFFFFF
      void $AddInstallers$b__0(Zenject::DiContainer* subContainer) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "<AddInstallers>b__0", subContainer));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>::$$c__DisplayClass2_0* New_ctor() {
        return (typename SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>::$$c__DisplayClass2_0*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>::$$c__DisplayClass2_0*>::get())));
      }
    }; // Zenject.SubContainerCreatorByNewGameObjectMethod`6/<>c__DisplayClass2_0
    // private readonly System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> _installerMethod
    // Offset: 0x0
    System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Action`7<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> installerMethod)
    // Offset: 0xFFFFFFFF
    static SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* New_ctor(Zenject::DiContainer* container, Zenject::GameObjectCreationParameters* gameObjectBindInfo, System::Action_7<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod) {
      return (SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*>::get(), container, gameObjectBindInfo, installerMethod)));
    }
    // protected override System.Void AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: System.Void SubContainerCreatorDynamicContext::AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::GameObjectContext* context) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddInstallers", args, context));
    }
  }; // Zenject.SubContainerCreatorByNewGameObjectMethod`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByNewGameObjectMethod_6, "Zenject", "SubContainerCreatorByNewGameObjectMethod`6");
#pragma pack(pop)
