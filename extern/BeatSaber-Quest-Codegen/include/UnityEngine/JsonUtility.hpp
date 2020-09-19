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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.JsonUtility
  class JsonUtility : public ::Il2CppObject {
    public:
    // static private System.String ToJsonInternal(System.Object obj, System.Boolean prettyPrint)
    // Offset: 0x1983400
    static ::Il2CppString* ToJsonInternal(::Il2CppObject* obj, bool prettyPrint);
    // static private System.Object FromJsonInternal(System.String json, System.Object objectToOverwrite, System.Type type)
    // Offset: 0x1983450
    static ::Il2CppObject* FromJsonInternal(::Il2CppString* json, ::Il2CppObject* objectToOverwrite, System::Type* type);
    // static public System.String ToJson(System.Object obj)
    // Offset: 0x19834A8
    static ::Il2CppString* ToJson(::Il2CppObject* obj);
    // static public System.String ToJson(System.Object obj, System.Boolean prettyPrint)
    // Offset: 0x19834B0
    static ::Il2CppString* ToJson(::Il2CppObject* obj, bool prettyPrint);
    // static public T FromJson(System.String json)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T FromJson(::Il2CppString* json) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("UnityEngine", "JsonUtility", "FromJson", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, json)));
    }
    // static public System.Object FromJson(System.String json, System.Type type)
    // Offset: 0x1983604
    static ::Il2CppObject* FromJson(::Il2CppString* json, System::Type* type);
  }; // UnityEngine.JsonUtility
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::JsonUtility*, "UnityEngine", "JsonUtility");
#pragma pack(pop)