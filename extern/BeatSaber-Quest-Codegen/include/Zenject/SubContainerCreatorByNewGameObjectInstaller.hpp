// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByNewGameObjectDynamicContext
#include "Zenject/SubContainerCreatorByNewGameObjectDynamicContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: GameObjectContext
  class GameObjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
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
  // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectInstaller
  class SubContainerCreatorByNewGameObjectInstaller : public Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
    public:
    // Nested type: Zenject::SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // private readonly System.Type _installerType
    // Offset: 0x20
    System::Type* installerType;
    // private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArgs
    // Offset: 0x28
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArgs;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Type installerType, System.Collections.Generic.List`1<Zenject.TypeValuePair> extraArgs)
    // Offset: 0xFD0AFC
    static SubContainerCreatorByNewGameObjectInstaller* New_ctor(Zenject::DiContainer* container, Zenject::GameObjectCreationParameters* gameObjectBindInfo, System::Type* installerType, System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArgs);
    // protected override System.Void AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    // Offset: 0xFD22E8
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: System.Void SubContainerCreatorDynamicContext::AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::GameObjectContext* context);
  }; // Zenject.SubContainerCreatorByNewGameObjectInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewGameObjectInstaller*, "Zenject", "SubContainerCreatorByNewGameObjectInstaller");
#pragma pack(pop)
