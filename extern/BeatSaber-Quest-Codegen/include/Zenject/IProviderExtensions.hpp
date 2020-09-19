// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
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
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IProviderExtensions
  class IProviderExtensions : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> EmptyArgList
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* _get_EmptyArgList();
    // Set static field: static private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> EmptyArgList
    static void _set_EmptyArgList(System::Collections::Generic::List_1<Zenject::TypeValuePair>* value);
    // static public System.Void GetAllInstancesWithInjectSplit(Zenject.IProvider creator, Zenject.InjectContext context, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xF3B57C
    static void GetAllInstancesWithInjectSplit(Zenject::IProvider* creator, Zenject::InjectContext* context, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
    // static public System.Void GetAllInstances(Zenject.IProvider creator, Zenject.InjectContext context, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xF3B684
    static void GetAllInstances(Zenject::IProvider* creator, Zenject::InjectContext* context, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
    // static public System.Void GetAllInstances(Zenject.IProvider creator, Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xF3B70C
    static void GetAllInstances(Zenject::IProvider* creator, Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
    // static public System.Object TryGetInstance(Zenject.IProvider creator, Zenject.InjectContext context)
    // Offset: 0xF3B80C
    static ::Il2CppObject* TryGetInstance(Zenject::IProvider* creator, Zenject::InjectContext* context);
    // static public System.Object TryGetInstance(Zenject.IProvider creator, Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args)
    // Offset: 0xF3B88C
    static ::Il2CppObject* TryGetInstance(Zenject::IProvider* creator, Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args);
    // static public System.Object GetInstance(Zenject.IProvider creator, Zenject.InjectContext context)
    // Offset: 0xF3BA48
    static ::Il2CppObject* GetInstance(Zenject::IProvider* creator, Zenject::InjectContext* context);
    // static public System.Object GetInstance(Zenject.IProvider creator, Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args)
    // Offset: 0xF3BAC8
    static ::Il2CppObject* GetInstance(Zenject::IProvider* creator, Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args);
    // static private System.Void .cctor()
    // Offset: 0xF3BC8C
    static void _cctor();
  }; // Zenject.IProviderExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IProviderExtensions*, "Zenject", "IProviderExtensions");
#pragma pack(pop)
