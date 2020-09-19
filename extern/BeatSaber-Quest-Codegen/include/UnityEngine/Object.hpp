// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HideFlags
  struct HideFlags;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Object
  class Object : public ::Il2CppObject {
    public:
    // private System.IntPtr m_CachedPtr
    // Offset: 0x10
    System::IntPtr m_CachedPtr;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_CachedPtr;
    }
    // Get static field: static System.Int32 OffsetOfInstanceIDInCPlusPlusObject
    static int _get_OffsetOfInstanceIDInCPlusPlusObject();
    // Set static field: static System.Int32 OffsetOfInstanceIDInCPlusPlusObject
    static void _set_OffsetOfInstanceIDInCPlusPlusObject(int value);
    // static field const value: static private System.String objectIsNullMessage
    static constexpr const char* objectIsNullMessage = "The Object you want to instantiate is null.";
    // Get static field: static private System.String objectIsNullMessage
    static ::Il2CppString* _get_objectIsNullMessage();
    // Set static field: static private System.String objectIsNullMessage
    static void _set_objectIsNullMessage(::Il2CppString* value);
    // static field const value: static private System.String cloneDestroyedMessage
    static constexpr const char* cloneDestroyedMessage = "Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake.";
    // Get static field: static private System.String cloneDestroyedMessage
    static ::Il2CppString* _get_cloneDestroyedMessage();
    // Set static field: static private System.String cloneDestroyedMessage
    static void _set_cloneDestroyedMessage(::Il2CppString* value);
    // public System.Int32 GetInstanceID()
    // Offset: 0x14188A0
    int GetInstanceID();
    // static private System.Boolean CompareBaseObjects(UnityEngine.Object lhs, UnityEngine.Object rhs)
    // Offset: 0x1418B28
    static bool CompareBaseObjects(UnityEngine::Object* lhs, UnityEngine::Object* rhs);
    // static private System.Boolean IsNativeObjectAlive(UnityEngine.Object o)
    // Offset: 0x1418C64
    static bool IsNativeObjectAlive(UnityEngine::Object* o);
    // private System.IntPtr GetCachedPtr()
    // Offset: 0x1418CB8
    System::IntPtr GetCachedPtr();
    // public System.String get_name()
    // Offset: 0x1414A8C
    ::Il2CppString* get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0x1418D00
    void set_name(::Il2CppString* value);
    // static public UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1418DE4
    static UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // static public UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
    // Offset: 0x14190B0
    static UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent);
    // static public UnityEngine.Object Instantiate(UnityEngine.Object original)
    // Offset: 0x141931C
    static UnityEngine::Object* Instantiate(UnityEngine::Object* original);
    // static public UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Transform parent, System.Boolean instantiateInWorldSpace)
    // Offset: 0x1419448
    static UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Transform* parent, bool instantiateInWorldSpace);
    // static public T Instantiate(T original)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Instantiate(T original) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("UnityEngine", "Object", "Instantiate", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, original)));
    }
    // static public T Instantiate(T original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Instantiate(T original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("UnityEngine", "Object", "Instantiate", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, original, position, rotation)));
    }
    // static public T Instantiate(T original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Instantiate(T original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("UnityEngine", "Object", "Instantiate", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, original, position, rotation, parent)));
    }
    // static public T Instantiate(T original, UnityEngine.Transform parent)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Instantiate(T original, UnityEngine::Transform* parent) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("UnityEngine", "Object", "Instantiate", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, original, parent)));
    }
    // static public T Instantiate(T original, UnityEngine.Transform parent, System.Boolean worldPositionStays)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Instantiate(T original, UnityEngine::Transform* parent, bool worldPositionStays) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("UnityEngine", "Object", "Instantiate", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, original, parent, worldPositionStays)));
    }
    // static public System.Void Destroy(UnityEngine.Object obj, System.Single t)
    // Offset: 0x14195F8
    static void Destroy(UnityEngine::Object* obj, float t);
    // static public System.Void Destroy(UnityEngine.Object obj)
    // Offset: 0x1419648
    static void Destroy(UnityEngine::Object* obj);
    // static public System.Void DestroyImmediate(UnityEngine.Object obj, System.Boolean allowDestroyingAssets)
    // Offset: 0x14196D0
    static void DestroyImmediate(UnityEngine::Object* obj, bool allowDestroyingAssets);
    // static public System.Void DestroyImmediate(UnityEngine.Object obj)
    // Offset: 0x1419720
    static void DestroyImmediate(UnityEngine::Object* obj);
    // static public UnityEngine.Object[] FindObjectsOfType(System.Type type)
    // Offset: 0x14197A8
    static ::Array<UnityEngine::Object*>* FindObjectsOfType(System::Type* type);
    // static public System.Void DontDestroyOnLoad(UnityEngine.Object target)
    // Offset: 0x14197E8
    static void DontDestroyOnLoad(UnityEngine::Object* target);
    // public UnityEngine.HideFlags get_hideFlags()
    // Offset: 0x1419828
    UnityEngine::HideFlags get_hideFlags();
    // public System.Void set_hideFlags(UnityEngine.HideFlags value)
    // Offset: 0x1416C08
    void set_hideFlags(UnityEngine::HideFlags value);
    // static public T[] FindObjectsOfType()
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* FindObjectsOfType() {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>("UnityEngine", "Object", "FindObjectsOfType", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // static public T FindObjectOfType()
    // Offset: 0xFFFFFFFF
    template<class T>
    static T FindObjectOfType() {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("UnityEngine", "Object", "FindObjectOfType", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // static private System.Void CheckNullArgument(System.Object arg, System.String message)
    // Offset: 0x1418F84
    static void CheckNullArgument(::Il2CppObject* arg, ::Il2CppString* message);
    // static public UnityEngine.Object FindObjectOfType(System.Type type)
    // Offset: 0x1419868
    static UnityEngine::Object* FindObjectOfType(System::Type* type);
    // static private System.Int32 GetOffsetOfInstanceIDInCPlusPlusObject()
    // Offset: 0x14189D8
    static int GetOffsetOfInstanceIDInCPlusPlusObject();
    // static private UnityEngine.Object Internal_CloneSingle(UnityEngine.Object data)
    // Offset: 0x1419408
    static UnityEngine::Object* Internal_CloneSingle(UnityEngine::Object* data);
    // static private UnityEngine.Object Internal_CloneSingleWithParent(UnityEngine.Object data, UnityEngine.Transform parent, System.Boolean worldPositionStays)
    // Offset: 0x14195A0
    static UnityEngine::Object* Internal_CloneSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, bool worldPositionStays);
    // static private UnityEngine.Object Internal_InstantiateSingle(UnityEngine.Object data, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x1419008
    static UnityEngine::Object* Internal_InstantiateSingle(UnityEngine::Object* data, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // static private UnityEngine.Object Internal_InstantiateSingleWithParent(UnityEngine.Object data, UnityEngine.Transform parent, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x1419264
    static UnityEngine::Object* Internal_InstantiateSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // static private System.String ToString(UnityEngine.Object obj)
    // Offset: 0x1419990
    static ::Il2CppString* ToString(UnityEngine::Object* obj);
    // static private System.String GetName(UnityEngine.Object obj)
    // Offset: 0x1418CC0
    static ::Il2CppString* GetName(UnityEngine::Object* obj);
    // static private System.Void SetName(UnityEngine.Object obj, System.String name)
    // Offset: 0x1418D94
    static void SetName(UnityEngine::Object* obj, ::Il2CppString* name);
    // static UnityEngine.Object FindObjectFromInstanceID(System.Int32 instanceID)
    // Offset: 0x1419B10
    static UnityEngine::Object* FindObjectFromInstanceID(int instanceID);
    // static private System.Void .cctor()
    // Offset: 0x1419B50
    static void _cctor();
    // static private UnityEngine.Object Internal_InstantiateSingle_Injected(UnityEngine.Object data, ref UnityEngine.Vector3 pos, ref UnityEngine.Quaternion rot)
    // Offset: 0x1419A50
    static UnityEngine::Object* Internal_InstantiateSingle_Injected(UnityEngine::Object* data, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot);
    // static private UnityEngine.Object Internal_InstantiateSingleWithParent_Injected(UnityEngine.Object data, UnityEngine.Transform parent, ref UnityEngine.Vector3 pos, ref UnityEngine.Quaternion rot)
    // Offset: 0x1419AA8
    static UnityEngine::Object* Internal_InstantiateSingleWithParent_Injected(UnityEngine::Object* data, UnityEngine::Transform* parent, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1418A0C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x1418A14
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0x141990C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x1413110
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Object* New_ctor();
  }; // UnityEngine.Object
  // static public System.Boolean op_Equality(UnityEngine.Object x, UnityEngine.Object y)
  // Offset: 0x14169AC
  bool operator ==(UnityEngine::Object* x, UnityEngine::Object& y);
  // static public System.Boolean op_Inequality(UnityEngine.Object x, UnityEngine.Object y)
  // Offset: 0x14199D0
  bool operator !=(UnityEngine::Object* x, UnityEngine::Object& y);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Object*, "UnityEngine", "Object");
#pragma pack(pop)