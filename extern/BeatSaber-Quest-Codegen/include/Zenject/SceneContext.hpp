// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.RunnableContext
#include "Zenject/RunnableContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SceneDecoratorContext
  class SceneDecoratorContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: MonoBehaviour because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SceneContext
  class SceneContext : public Zenject::RunnableContext {
    public:
    // Nested type: Zenject::SceneContext::$$c__DisplayClass48_0
    class $$c__DisplayClass48_0;
    // Nested type: Zenject::SceneContext::$$c
    class $$c;
    // Nested type: Zenject::SceneContext::$$c__DisplayClass50_0
    class $$c__DisplayClass50_0;
    // private System.Action PreInstall
    // Offset: 0x48
    System::Action* PreInstall;
    // private System.Action PostInstall
    // Offset: 0x50
    System::Action* PostInstall;
    // private System.Action PreResolve
    // Offset: 0x58
    System::Action* PreResolve;
    // private System.Action PostResolve
    // Offset: 0x60
    System::Action* PostResolve;
    // public UnityEngine.Events.UnityEvent OnPreInstall
    // Offset: 0x68
    UnityEngine::Events::UnityEvent* OnPreInstall;
    // public UnityEngine.Events.UnityEvent OnPostInstall
    // Offset: 0x70
    UnityEngine::Events::UnityEvent* OnPostInstall;
    // public UnityEngine.Events.UnityEvent OnPreResolve
    // Offset: 0x78
    UnityEngine::Events::UnityEvent* OnPreResolve;
    // public UnityEngine.Events.UnityEvent OnPostResolve
    // Offset: 0x80
    UnityEngine::Events::UnityEvent* OnPostResolve;
    // private System.Boolean _parentNewObjectsUnderSceneContext
    // Offset: 0x88
    bool parentNewObjectsUnderSceneContext;
    // private System.Collections.Generic.List`1<System.String> _contractNames
    // Offset: 0x90
    System::Collections::Generic::List_1<::Il2CppString*>* contractNames;
    // private System.Collections.Generic.List`1<System.String> _parentContractNames
    // Offset: 0x98
    System::Collections::Generic::List_1<::Il2CppString*>* parentContractNames;
    // private Zenject.DiContainer _container
    // Offset: 0xA0
    Zenject::DiContainer* container;
    // private readonly System.Collections.Generic.List`1<Zenject.SceneDecoratorContext> _decoratorContexts
    // Offset: 0xA8
    System::Collections::Generic::List_1<Zenject::SceneDecoratorContext*>* decoratorContexts;
    // private System.Boolean _hasInstalled
    // Offset: 0xB0
    bool hasInstalled;
    // private System.Boolean _hasResolved
    // Offset: 0xB1
    bool hasResolved;
    // Get static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsEarlyInstallMethod
    static System::Action_1<Zenject::DiContainer*>* _get_ExtraBindingsEarlyInstallMethod();
    // Set static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsEarlyInstallMethod
    static void _set_ExtraBindingsEarlyInstallMethod(System::Action_1<Zenject::DiContainer*>* value);
    // Get static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsInstallMethod
    static System::Action_1<Zenject::DiContainer*>* _get_ExtraBindingsInstallMethod();
    // Set static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsInstallMethod
    static void _set_ExtraBindingsInstallMethod(System::Action_1<Zenject::DiContainer*>* value);
    // Get static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsLateInstallMethod
    static System::Action_1<Zenject::DiContainer*>* _get_ExtraBindingsLateInstallMethod();
    // Set static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsLateInstallMethod
    static void _set_ExtraBindingsLateInstallMethod(System::Action_1<Zenject::DiContainer*>* value);
    // Get static field: static public System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> ParentContainers
    static System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>* _get_ParentContainers();
    // Set static field: static public System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> ParentContainers
    static void _set_ParentContainers(System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>* value);
    // public System.Void add_PreInstall(System.Action value)
    // Offset: 0xFCB43C
    void add_PreInstall(System::Action* value);
    // public System.Void remove_PreInstall(System.Action value)
    // Offset: 0xFCB4E0
    void remove_PreInstall(System::Action* value);
    // public System.Void add_PostInstall(System.Action value)
    // Offset: 0xFCB584
    void add_PostInstall(System::Action* value);
    // public System.Void remove_PostInstall(System.Action value)
    // Offset: 0xFCB628
    void remove_PostInstall(System::Action* value);
    // public System.Void add_PreResolve(System.Action value)
    // Offset: 0xFCB6CC
    void add_PreResolve(System::Action* value);
    // public System.Void remove_PreResolve(System.Action value)
    // Offset: 0xFCB770
    void remove_PreResolve(System::Action* value);
    // public System.Void add_PostResolve(System.Action value)
    // Offset: 0xFCB814
    void add_PostResolve(System::Action* value);
    // public System.Void remove_PostResolve(System.Action value)
    // Offset: 0xFCB8B8
    void remove_PostResolve(System::Action* value);
    // public System.Boolean get_HasResolved()
    // Offset: 0xFCB964
    bool get_HasResolved();
    // public System.Boolean get_HasInstalled()
    // Offset: 0xFCB96C
    bool get_HasInstalled();
    // public System.Boolean get_IsValidating()
    // Offset: 0xFCB974
    bool get_IsValidating();
    // public System.Collections.Generic.IEnumerable`1<System.String> get_ContractNames()
    // Offset: 0xFCB9A4
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>* get_ContractNames();
    // public System.Void set_ContractNames(System.Collections.Generic.IEnumerable`1<System.String> value)
    // Offset: 0xFCB9AC
    void set_ContractNames(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* value);
    // public System.Collections.Generic.IEnumerable`1<System.String> get_ParentContractNames()
    // Offset: 0xFCBA2C
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>* get_ParentContractNames();
    // public System.Void set_ParentContractNames(System.Collections.Generic.IEnumerable`1<System.String> value)
    // Offset: 0xFCBAB4
    void set_ParentContractNames(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* value);
    // public System.Boolean get_ParentNewObjectsUnderSceneContext()
    // Offset: 0xFCBB20
    bool get_ParentNewObjectsUnderSceneContext();
    // public System.Void set_ParentNewObjectsUnderSceneContext(System.Boolean value)
    // Offset: 0xFCBB28
    void set_ParentNewObjectsUnderSceneContext(bool value);
    // public System.Void Awake()
    // Offset: 0xFCBB34
    void Awake();
    // public System.Void Validate()
    // Offset: 0xFCBB38
    void Validate();
    // private System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> GetParentContainers()
    // Offset: 0xFCC110
    System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>* GetParentContainers();
    // private System.Collections.Generic.List`1<Zenject.SceneDecoratorContext> LookupDecoratorContexts()
    // Offset: 0xFCC690
    System::Collections::Generic::List_1<Zenject::SceneDecoratorContext*>* LookupDecoratorContexts();
    // public System.Void Install()
    // Offset: 0xFCBB70
    void Install();
    // public System.Void Resolve()
    // Offset: 0xFCC010
    void Resolve();
    // private System.Void InstallBindings(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> injectableMonoBehaviours)
    // Offset: 0xFCCAA0
    void InstallBindings(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableMonoBehaviours);
    // static public Zenject.SceneContext Create()
    // Offset: 0xFCD230
    static Zenject::SceneContext* Create();
    // private System.Boolean <LookupDecoratorContexts>b__49_2(Zenject.SceneDecoratorContext decoratorContext)
    // Offset: 0xFCD3D4
    bool $LookupDecoratorContexts$b__49_2(Zenject::SceneDecoratorContext* decoratorContext);
    // public override Zenject.DiContainer get_Container()
    // Offset: 0xFCB95C
    // Implemented from: Zenject.Context
    // Base method: Zenject.DiContainer Context::get_Container()
    Zenject::DiContainer* get_Container();
    // protected override System.Void RunInternal()
    // Offset: 0xFCC0B0
    // Implemented from: Zenject.RunnableContext
    // Base method: System.Void RunnableContext::RunInternal()
    void RunInternal();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetRootGameObjects()
    // Offset: 0xFCC0E4
    // Implemented from: Zenject.Context
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> Context::GetRootGameObjects()
    System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetRootGameObjects();
    // protected override System.Void GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    // Offset: 0xFCD1E8
    // Implemented from: Zenject.Context
    // Base method: System.Void Context::GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    void GetInjectableMonoBehaviours(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* monoBehaviours);
    // public System.Void .ctor()
    // Offset: 0xFCD2C4
    // Implemented from: Zenject.RunnableContext
    // Base method: System.Void RunnableContext::.ctor()
    // Base method: System.Void Context::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SceneContext* New_ctor();
  }; // Zenject.SceneContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContext*, "Zenject", "SceneContext");
#pragma pack(pop)