// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameScenesManager/ScenesStackData
  class GameScenesManager::ScenesStackData : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<System.String> <sceneNames>k__BackingField
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* sceneNames;
    // private Zenject.DiContainer <container>k__BackingField
    // Offset: 0x18
    Zenject::DiContainer* container;
    // public System.Collections.Generic.List`1<System.String> get_sceneNames()
    // Offset: 0xCB5D6C
    System::Collections::Generic::List_1<::Il2CppString*>* get_sceneNames();
    // private System.Void set_sceneNames(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0xCB5D74
    void set_sceneNames(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // public Zenject.DiContainer get_container()
    // Offset: 0xCB5D7C
    Zenject::DiContainer* get_container();
    // private System.Void set_container(Zenject.DiContainer value)
    // Offset: 0xCB5D84
    void set_container(Zenject::DiContainer* value);
    // public System.Void .ctor(System.Collections.Generic.List`1<System.String> sceneNames)
    // Offset: 0xCB3344
    static GameScenesManager::ScenesStackData* New_ctor(System::Collections::Generic::List_1<::Il2CppString*>* sceneNames);
    // public System.Void SetDiContainer(Zenject.DiContainer container)
    // Offset: 0xCB49CC
    void SetDiContainer(Zenject::DiContainer* container);
  }; // GameScenesManager/ScenesStackData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager::ScenesStackData*, "", "GameScenesManager/ScenesStackData");
#pragma pack(pop)
