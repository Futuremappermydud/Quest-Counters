// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PrimitiveType
  struct PrimitiveType;
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: SendMessageOptions
  struct SendMessageOptions;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.GameObject
  class GameObject : public UnityEngine::Object {
    public:
    // static public UnityEngine.GameObject CreatePrimitive(UnityEngine.PrimitiveType type)
    // Offset: 0x1313410
    static UnityEngine::GameObject* CreatePrimitive(UnityEngine::PrimitiveType type);
    // public T GetComponent()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponent() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "GetComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public UnityEngine.Component GetComponent(System.Type type)
    // Offset: 0x130B100
    UnityEngine::Component* GetComponent(System::Type* type);
    // System.Void GetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
    // Offset: 0x1313450
    void GetComponentFastPath(System::Type* type, System::IntPtr oneFurtherThanResultValue);
    // UnityEngine.Component GetComponentByName(System.String type)
    // Offset: 0x13134A8
    UnityEngine::Component* GetComponentByName(::Il2CppString* type);
    // public UnityEngine.Component GetComponent(System.String type)
    // Offset: 0x13134F8
    UnityEngine::Component* GetComponent(::Il2CppString* type);
    // public UnityEngine.Component GetComponentInChildren(System.Type type, System.Boolean includeInactive)
    // Offset: 0x130B234
    UnityEngine::Component* GetComponentInChildren(System::Type* type, bool includeInactive);
    // public UnityEngine.Component GetComponentInChildren(System.Type type)
    // Offset: 0x1313548
    UnityEngine::Component* GetComponentInChildren(System::Type* type);
    // public T GetComponentInChildren()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponentInChildren() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "GetComponentInChildren", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public T GetComponentInChildren(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponentInChildren(bool includeInactive) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "GetComponentInChildren", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, includeInactive)));
    }
    // public UnityEngine.Component GetComponentInParent(System.Type type)
    // Offset: 0x130B430
    UnityEngine::Component* GetComponentInParent(System::Type* type);
    // private System.Array GetComponentsInternal(System.Type type, System.Boolean useSearchTypeAsArrayReturnType, System.Boolean recursive, System.Boolean includeInactive, System.Boolean reverse, System.Object resultList)
    // Offset: 0x131359C
    System::Array* GetComponentsInternal(System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, ::Il2CppObject* resultList);
    // public UnityEngine.Component[] GetComponents(System.Type type)
    // Offset: 0x130B5FC
    ::Array<UnityEngine::Component*>* GetComponents(System::Type* type);
    // public T[] GetComponents()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponents() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetComponents", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public System.Void GetComponents(System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponents(System::Collections::Generic::List_1<T>* results) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetComponents", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, results));
    }
    // public UnityEngine.Component[] GetComponentsInChildren(System.Type type, System.Boolean includeInactive)
    // Offset: 0x130B2F0
    ::Array<UnityEngine::Component*>* GetComponentsInChildren(System::Type* type, bool includeInactive);
    // public T[] GetComponentsInChildren(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInChildren(bool includeInactive) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetComponentsInChildren", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, includeInactive)));
    }
    // public System.Void GetComponentsInChildren(System.Boolean includeInactive, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponentsInChildren(bool includeInactive, System::Collections::Generic::List_1<T>* results) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetComponentsInChildren", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, includeInactive, results));
    }
    // public T[] GetComponentsInChildren()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInChildren() {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetComponentsInChildren", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public UnityEngine.Component[] GetComponentsInParent(System.Type type, System.Boolean includeInactive)
    // Offset: 0x130B4E4
    ::Array<UnityEngine::Component*>* GetComponentsInParent(System::Type* type, bool includeInactive);
    // public System.Void GetComponentsInParent(System.Boolean includeInactive, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponentsInParent(bool includeInactive, System::Collections::Generic::List_1<T>* results) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetComponentsInParent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, includeInactive, results));
    }
    // public T[] GetComponentsInParent(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInParent(bool includeInactive) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetComponentsInParent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, includeInactive)));
    }
    // private UnityEngine.Component Internal_AddComponentWithType(System.Type componentType)
    // Offset: 0x1313624
    UnityEngine::Component* Internal_AddComponentWithType(System::Type* componentType);
    // public UnityEngine.Component AddComponent(System.Type componentType)
    // Offset: 0x1313674
    UnityEngine::Component* AddComponent(System::Type* componentType);
    // public T AddComponent()
    // Offset: 0xFFFFFFFF
    template<class T>
    T AddComponent() {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "AddComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public UnityEngine.Transform get_transform()
    // Offset: 0x13136C4
    UnityEngine::Transform* get_transform();
    // public System.Int32 get_layer()
    // Offset: 0x1313704
    int get_layer();
    // public System.Void set_layer(System.Int32 value)
    // Offset: 0x1313744
    void set_layer(int value);
    // public System.Void SetActive(System.Boolean value)
    // Offset: 0x1313794
    void SetActive(bool value);
    // public System.Boolean get_activeSelf()
    // Offset: 0x13137E4
    bool get_activeSelf();
    // public System.Boolean get_activeInHierarchy()
    // Offset: 0x1313824
    bool get_activeInHierarchy();
    // public System.String get_tag()
    // Offset: 0x130B7D8
    ::Il2CppString* get_tag();
    // public System.Void set_tag(System.String value)
    // Offset: 0x130B89C
    void set_tag(::Il2CppString* value);
    // public System.Boolean CompareTag(System.String tag)
    // Offset: 0x130B970
    bool CompareTag(::Il2CppString* tag);
    // static public UnityEngine.GameObject[] FindGameObjectsWithTag(System.String tag)
    // Offset: 0x1313864
    static ::Array<UnityEngine::GameObject*>* FindGameObjectsWithTag(::Il2CppString* tag);
    // public System.Void SendMessage(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
    // Offset: 0x13138A4
    void SendMessage(::Il2CppString* methodName, ::Il2CppObject* value, UnityEngine::SendMessageOptions options);
    // public System.Void BroadcastMessage(System.String methodName, System.Object parameter, UnityEngine.SendMessageOptions options)
    // Offset: 0x131390C
    void BroadcastMessage(::Il2CppString* methodName, ::Il2CppObject* parameter, UnityEngine::SendMessageOptions options);
    // public System.Void .ctor(System.String name)
    // Offset: 0x1313974
    static GameObject* New_ctor(::Il2CppString* name);
    // public System.Void .ctor(System.String name, params System.Type[] components)
    // Offset: 0x1313AF8
    static GameObject* New_ctor(::Il2CppString* name, ::Array<System::Type*>* components);
    // Creating initializer_list -> params proxy for: System.Void .ctor(System.String name, params System.Type[] components)
    static GameObject* New_ctor(::Il2CppString* name, std::initializer_list<System::Type*> components);
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(System.String name, params System.Type[] components)
    template<class ...TParams>
    static GameObject* New_ctor(::Il2CppString* name, TParams&&... components) {
      return New_ctor(name, {components...});
    }
    // static private System.Void Internal_CreateGameObject(UnityEngine.GameObject self, System.String name)
    // Offset: 0x1313A14
    static void Internal_CreateGameObject(UnityEngine::GameObject* self, ::Il2CppString* name);
    // static public UnityEngine.GameObject Find(System.String name)
    // Offset: 0x1313C28
    static UnityEngine::GameObject* Find(::Il2CppString* name);
    // public UnityEngine.SceneManagement.Scene get_scene()
    // Offset: 0x1313C68
    UnityEngine::SceneManagement::Scene get_scene();
    // public UnityEngine.GameObject get_gameObject()
    // Offset: 0x1313D10
    UnityEngine::GameObject* get_gameObject();
    // private System.Void get_scene_Injected(out UnityEngine.SceneManagement.Scene ret)
    // Offset: 0x1313CC0
    void get_scene_Injected(UnityEngine::SceneManagement::Scene& ret);
    // public System.Void .ctor()
    // Offset: 0x1313A64
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameObject* New_ctor();
  }; // UnityEngine.GameObject
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GameObject*, "UnityEngine", "GameObject");
#pragma pack(pop)
