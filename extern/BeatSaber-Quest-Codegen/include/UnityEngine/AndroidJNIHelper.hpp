// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaRunnable
  class AndroidJavaRunnable;
  // Forward declaring type: AndroidJavaProxy
  class AndroidJavaProxy;
  // Forward declaring type: jvalue
  struct jvalue;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AndroidJNIHelper
  class AndroidJNIHelper : public ::Il2CppObject {
    public:
    // static public System.Boolean get_debug()
    // Offset: 0x191F070
    static bool get_debug();
    // static public System.Void set_debug(System.Boolean value)
    // Offset: 0x191F0A4
    static void set_debug(bool value);
    // static public System.IntPtr GetConstructorID(System.IntPtr javaClass)
    // Offset: 0x191F0E4
    static System::IntPtr GetConstructorID(System::IntPtr javaClass);
    // static public System.IntPtr GetConstructorID(System.IntPtr javaClass, System.String signature)
    // Offset: 0x191F134
    static System::IntPtr GetConstructorID(System::IntPtr javaClass, ::Il2CppString* signature);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName)
    // Offset: 0x191F2E8
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName, System.String signature)
    // Offset: 0x191F354
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName, ::Il2CppString* signature);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName, System.String signature, System.Boolean isStatic)
    // Offset: 0x191F34C
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName)
    // Offset: 0x191F520
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName, System.String signature)
    // Offset: 0x191F58C
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName, ::Il2CppString* signature);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName, System.String signature, System.Boolean isStatic)
    // Offset: 0x191F584
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr CreateJavaRunnable(UnityEngine.AndroidJavaRunnable jrunnable)
    // Offset: 0x191F888
    static System::IntPtr CreateJavaRunnable(UnityEngine::AndroidJavaRunnable* jrunnable);
    // static public System.IntPtr CreateJavaProxy(UnityEngine.AndroidJavaProxy proxy)
    // Offset: 0x191F8EC
    static System::IntPtr CreateJavaProxy(UnityEngine::AndroidJavaProxy* proxy);
    // static public System.IntPtr ConvertToJNIArray(System.Array array)
    // Offset: 0x191FA78
    static System::IntPtr ConvertToJNIArray(System::Array* array);
    // static public UnityEngine.jvalue[] CreateJNIArgArray(System.Object[] args)
    // Offset: 0x19202B4
    static ::Array<UnityEngine::jvalue>* CreateJNIArgArray(::Array<::Il2CppObject*>* args);
    // static public System.Void DeleteJNIArgArray(System.Object[] args, UnityEngine.jvalue[] jniArgs)
    // Offset: 0x192078C
    static void DeleteJNIArgArray(::Array<::Il2CppObject*>* args, ::Array<UnityEngine::jvalue>* jniArgs);
    // static public System.IntPtr GetConstructorID(System.IntPtr jclass, System.Object[] args)
    // Offset: 0x19208B0
    static System::IntPtr GetConstructorID(System::IntPtr jclass, ::Array<::Il2CppObject*>* args);
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0x1920908
    static System::IntPtr GetMethodID(System::IntPtr jclass, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* args, bool isStatic);
    // static public System.String GetSignature(System.Object obj)
    // Offset: 0x1920990
    static ::Il2CppString* GetSignature(::Il2CppObject* obj);
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0x1921538
    static ::Il2CppString* GetSignature(::Array<::Il2CppObject*>* args);
    // static public ArrayType ConvertFromJNIArray(System.IntPtr array)
    // Offset: 0xFFFFFFFF
    template<class ArrayType>
    static ArrayType ConvertFromJNIArray(System::IntPtr array) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<ArrayType>("UnityEngine", "AndroidJNIHelper", "ConvertFromJNIArray", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayType>::get()}, array)));
    }
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    static System::IntPtr GetMethodID(System::IntPtr jclass, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* args, bool isStatic) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::IntPtr>("UnityEngine", "AndroidJNIHelper", "GetMethodID", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, jclass, methodName, args, isStatic)));
    }
    // static public System.IntPtr GetFieldID(System.IntPtr jclass, System.String fieldName, System.Boolean isStatic)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    static System::IntPtr GetFieldID(System::IntPtr jclass, ::Il2CppString* fieldName, bool isStatic) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::IntPtr>("UnityEngine", "AndroidJNIHelper", "GetFieldID", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, jclass, fieldName, isStatic)));
    }
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    static ::Il2CppString* GetSignature(::Array<::Il2CppObject*>* args) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Il2CppString*>("UnityEngine", "AndroidJNIHelper", "GetSignature", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, args)));
    }
  }; // UnityEngine.AndroidJNIHelper
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJNIHelper*, "UnityEngine", "AndroidJNIHelper");
#pragma pack(pop)
