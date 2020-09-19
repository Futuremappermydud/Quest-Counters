// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: jvalue
  struct jvalue;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AndroidJNISafe
  class AndroidJNISafe : public ::Il2CppObject {
    public:
    // static public System.Void CheckException()
    // Offset: 0x1921634
    static void CheckException();
    // static public System.Void DeleteGlobalRef(System.IntPtr globalref)
    // Offset: 0x1921A38
    static void DeleteGlobalRef(System::IntPtr globalref);
    // static public System.Void DeleteWeakGlobalRef(System.IntPtr globalref)
    // Offset: 0x1921ABC
    static void DeleteWeakGlobalRef(System::IntPtr globalref);
    // static public System.Void DeleteLocalRef(System.IntPtr localref)
    // Offset: 0x19219B4
    static void DeleteLocalRef(System::IntPtr localref);
    // static public System.IntPtr NewString(System.String chars)
    // Offset: 0x1921B40
    static System::IntPtr NewString(::Il2CppString* chars);
    // static public System.String GetStringChars(System.IntPtr str)
    // Offset: 0x1921BBC
    static ::Il2CppString* GetStringChars(System::IntPtr str);
    // static public System.IntPtr GetObjectClass(System.IntPtr ptr)
    // Offset: 0x1921C38
    static System::IntPtr GetObjectClass(System::IntPtr ptr);
    // static public System.IntPtr GetStaticMethodID(System.IntPtr clazz, System.String name, System.String sig)
    // Offset: 0x1921CB4
    static System::IntPtr GetStaticMethodID(System::IntPtr clazz, ::Il2CppString* name, ::Il2CppString* sig);
    // static public System.IntPtr GetMethodID(System.IntPtr obj, System.String name, System.String sig)
    // Offset: 0x1921D48
    static System::IntPtr GetMethodID(System::IntPtr obj, ::Il2CppString* name, ::Il2CppString* sig);
    // static public System.IntPtr GetFieldID(System.IntPtr clazz, System.String name, System.String sig)
    // Offset: 0x1921DDC
    static System::IntPtr GetFieldID(System::IntPtr clazz, ::Il2CppString* name, ::Il2CppString* sig);
    // static public System.IntPtr GetStaticFieldID(System.IntPtr clazz, System.String name, System.String sig)
    // Offset: 0x1921E70
    static System::IntPtr GetStaticFieldID(System::IntPtr clazz, ::Il2CppString* name, ::Il2CppString* sig);
    // static public System.IntPtr FromReflectedMethod(System.IntPtr refMethod)
    // Offset: 0x1921F04
    static System::IntPtr FromReflectedMethod(System::IntPtr refMethod);
    // static public System.IntPtr FindClass(System.String name)
    // Offset: 0x1921F80
    static System::IntPtr FindClass(::Il2CppString* name);
    // static public System.IntPtr NewObject(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1921FFC
    static System::IntPtr NewObject(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Void SetStaticObjectField(System.IntPtr clazz, System.IntPtr fieldID, System.IntPtr val)
    // Offset: 0x1922090
    static void SetStaticObjectField(System::IntPtr clazz, System::IntPtr fieldID, System::IntPtr val);
    // static public System.Void SetStaticStringField(System.IntPtr clazz, System.IntPtr fieldID, System.String val)
    // Offset: 0x1922128
    static void SetStaticStringField(System::IntPtr clazz, System::IntPtr fieldID, ::Il2CppString* val);
    // static public System.Void SetStaticCharField(System.IntPtr clazz, System.IntPtr fieldID, System.Char val)
    // Offset: 0x19221C0
    static void SetStaticCharField(System::IntPtr clazz, System::IntPtr fieldID, ::Il2CppChar val);
    // static public System.Void SetStaticDoubleField(System.IntPtr clazz, System.IntPtr fieldID, System.Double val)
    // Offset: 0x1922258
    static void SetStaticDoubleField(System::IntPtr clazz, System::IntPtr fieldID, double val);
    // static public System.Void SetStaticFloatField(System.IntPtr clazz, System.IntPtr fieldID, System.Single val)
    // Offset: 0x19222FC
    static void SetStaticFloatField(System::IntPtr clazz, System::IntPtr fieldID, float val);
    // static public System.Void SetStaticLongField(System.IntPtr clazz, System.IntPtr fieldID, System.Int64 val)
    // Offset: 0x19223A0
    static void SetStaticLongField(System::IntPtr clazz, System::IntPtr fieldID, int64_t val);
    // static public System.Void SetStaticShortField(System.IntPtr clazz, System.IntPtr fieldID, System.Int16 val)
    // Offset: 0x1922438
    static void SetStaticShortField(System::IntPtr clazz, System::IntPtr fieldID, int16_t val);
    // static public System.Void SetStaticSByteField(System.IntPtr clazz, System.IntPtr fieldID, System.SByte val)
    // Offset: 0x19224D0
    static void SetStaticSByteField(System::IntPtr clazz, System::IntPtr fieldID, int8_t val);
    // static public System.Void SetStaticBooleanField(System.IntPtr clazz, System.IntPtr fieldID, System.Boolean val)
    // Offset: 0x1922568
    static void SetStaticBooleanField(System::IntPtr clazz, System::IntPtr fieldID, bool val);
    // static public System.Void SetStaticIntField(System.IntPtr clazz, System.IntPtr fieldID, System.Int32 val)
    // Offset: 0x1922600
    static void SetStaticIntField(System::IntPtr clazz, System::IntPtr fieldID, int val);
    // static public System.IntPtr GetStaticObjectField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1922698
    static System::IntPtr GetStaticObjectField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.String GetStaticStringField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1922724
    static ::Il2CppString* GetStaticStringField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Char GetStaticCharField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x19227B0
    static ::Il2CppChar GetStaticCharField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Double GetStaticDoubleField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x192283C
    static double GetStaticDoubleField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Single GetStaticFloatField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x19228D4
    static float GetStaticFloatField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Int64 GetStaticLongField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x192296C
    static int64_t GetStaticLongField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Int16 GetStaticShortField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x19229F8
    static int16_t GetStaticShortField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.SByte GetStaticSByteField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1922A84
    static int8_t GetStaticSByteField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Boolean GetStaticBooleanField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1922B10
    static bool GetStaticBooleanField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Int32 GetStaticIntField(System.IntPtr clazz, System.IntPtr fieldID)
    // Offset: 0x1922B9C
    static int GetStaticIntField(System::IntPtr clazz, System::IntPtr fieldID);
    // static public System.Void CallStaticVoidMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1922C28
    static void CallStaticVoidMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.IntPtr CallStaticObjectMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1922CC0
    static System::IntPtr CallStaticObjectMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.String CallStaticStringMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1922D54
    static ::Il2CppString* CallStaticStringMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Char CallStaticCharMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1922DE8
    static ::Il2CppChar CallStaticCharMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Double CallStaticDoubleMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1922E7C
    static double CallStaticDoubleMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Single CallStaticFloatMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1922F1C
    static float CallStaticFloatMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int64 CallStaticLongMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1922FBC
    static int64_t CallStaticLongMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int16 CallStaticShortMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1923050
    static int16_t CallStaticShortMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.SByte CallStaticSByteMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x19230E4
    static int8_t CallStaticSByteMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Boolean CallStaticBooleanMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1923178
    static bool CallStaticBooleanMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int32 CallStaticIntMethod(System.IntPtr clazz, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x192320C
    static int CallStaticIntMethod(System::IntPtr clazz, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Void SetObjectField(System.IntPtr obj, System.IntPtr fieldID, System.IntPtr val)
    // Offset: 0x19232A0
    static void SetObjectField(System::IntPtr obj, System::IntPtr fieldID, System::IntPtr val);
    // static public System.Void SetStringField(System.IntPtr obj, System.IntPtr fieldID, System.String val)
    // Offset: 0x1923338
    static void SetStringField(System::IntPtr obj, System::IntPtr fieldID, ::Il2CppString* val);
    // static public System.Void SetCharField(System.IntPtr obj, System.IntPtr fieldID, System.Char val)
    // Offset: 0x19233D0
    static void SetCharField(System::IntPtr obj, System::IntPtr fieldID, ::Il2CppChar val);
    // static public System.Void SetDoubleField(System.IntPtr obj, System.IntPtr fieldID, System.Double val)
    // Offset: 0x1923468
    static void SetDoubleField(System::IntPtr obj, System::IntPtr fieldID, double val);
    // static public System.Void SetFloatField(System.IntPtr obj, System.IntPtr fieldID, System.Single val)
    // Offset: 0x192350C
    static void SetFloatField(System::IntPtr obj, System::IntPtr fieldID, float val);
    // static public System.Void SetLongField(System.IntPtr obj, System.IntPtr fieldID, System.Int64 val)
    // Offset: 0x19235B0
    static void SetLongField(System::IntPtr obj, System::IntPtr fieldID, int64_t val);
    // static public System.Void SetShortField(System.IntPtr obj, System.IntPtr fieldID, System.Int16 val)
    // Offset: 0x1923648
    static void SetShortField(System::IntPtr obj, System::IntPtr fieldID, int16_t val);
    // static public System.Void SetSByteField(System.IntPtr obj, System.IntPtr fieldID, System.SByte val)
    // Offset: 0x19236E0
    static void SetSByteField(System::IntPtr obj, System::IntPtr fieldID, int8_t val);
    // static public System.Void SetBooleanField(System.IntPtr obj, System.IntPtr fieldID, System.Boolean val)
    // Offset: 0x1923778
    static void SetBooleanField(System::IntPtr obj, System::IntPtr fieldID, bool val);
    // static public System.Void SetIntField(System.IntPtr obj, System.IntPtr fieldID, System.Int32 val)
    // Offset: 0x1923810
    static void SetIntField(System::IntPtr obj, System::IntPtr fieldID, int val);
    // static public System.IntPtr GetObjectField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x19238A8
    static System::IntPtr GetObjectField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.String GetStringField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1923934
    static ::Il2CppString* GetStringField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Char GetCharField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x19239C0
    static ::Il2CppChar GetCharField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Double GetDoubleField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1923A4C
    static double GetDoubleField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Single GetFloatField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1923AE4
    static float GetFloatField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Int64 GetLongField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1923B7C
    static int64_t GetLongField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Int16 GetShortField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1923C08
    static int16_t GetShortField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.SByte GetSByteField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1923C94
    static int8_t GetSByteField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Boolean GetBooleanField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1923D20
    static bool GetBooleanField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Int32 GetIntField(System.IntPtr obj, System.IntPtr fieldID)
    // Offset: 0x1923DAC
    static int GetIntField(System::IntPtr obj, System::IntPtr fieldID);
    // static public System.Void CallVoidMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1923E38
    static void CallVoidMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.IntPtr CallObjectMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1923ED0
    static System::IntPtr CallObjectMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.String CallStringMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1923F64
    static ::Il2CppString* CallStringMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Char CallCharMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1923FF8
    static ::Il2CppChar CallCharMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Double CallDoubleMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x192408C
    static double CallDoubleMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Single CallFloatMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x192412C
    static float CallFloatMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int64 CallLongMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x19241CC
    static int64_t CallLongMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int16 CallShortMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1924260
    static int16_t CallShortMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.SByte CallSByteMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x19242F4
    static int8_t CallSByteMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Boolean CallBooleanMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x1924388
    static bool CallBooleanMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Int32 CallIntMethod(System.IntPtr obj, System.IntPtr methodID, UnityEngine.jvalue[] args)
    // Offset: 0x192441C
    static int CallIntMethod(System::IntPtr obj, System::IntPtr methodID, ::Array<UnityEngine::jvalue>* args);
    // static public System.Char[] FromCharArray(System.IntPtr array)
    // Offset: 0x19244B0
    static ::Array<::Il2CppChar>* FromCharArray(System::IntPtr array);
    // static public System.Double[] FromDoubleArray(System.IntPtr array)
    // Offset: 0x192452C
    static ::Array<double>* FromDoubleArray(System::IntPtr array);
    // static public System.Single[] FromFloatArray(System.IntPtr array)
    // Offset: 0x19245A8
    static ::Array<float>* FromFloatArray(System::IntPtr array);
    // static public System.Int64[] FromLongArray(System.IntPtr array)
    // Offset: 0x1924624
    static ::Array<int64_t>* FromLongArray(System::IntPtr array);
    // static public System.Int16[] FromShortArray(System.IntPtr array)
    // Offset: 0x19246A0
    static ::Array<int16_t>* FromShortArray(System::IntPtr array);
    // static public System.Byte[] FromByteArray(System.IntPtr array)
    // Offset: 0x192471C
    static ::Array<uint8_t>* FromByteArray(System::IntPtr array);
    // static public System.SByte[] FromSByteArray(System.IntPtr array)
    // Offset: 0x1924798
    static ::Array<int8_t>* FromSByteArray(System::IntPtr array);
    // static public System.Boolean[] FromBooleanArray(System.IntPtr array)
    // Offset: 0x1924814
    static ::Array<bool>* FromBooleanArray(System::IntPtr array);
    // static public System.Int32[] FromIntArray(System.IntPtr array)
    // Offset: 0x1924890
    static ::Array<int>* FromIntArray(System::IntPtr array);
    // static public System.IntPtr ToObjectArray(System.IntPtr[] array, System.IntPtr type)
    // Offset: 0x192490C
    static System::IntPtr ToObjectArray(::Array<System::IntPtr>* array, System::IntPtr type);
    // static public System.IntPtr ToCharArray(System.Char[] array)
    // Offset: 0x1924998
    static System::IntPtr ToCharArray(::Array<::Il2CppChar>* array);
    // static public System.IntPtr ToDoubleArray(System.Double[] array)
    // Offset: 0x1924A14
    static System::IntPtr ToDoubleArray(::Array<double>* array);
    // static public System.IntPtr ToFloatArray(System.Single[] array)
    // Offset: 0x1924A90
    static System::IntPtr ToFloatArray(::Array<float>* array);
    // static public System.IntPtr ToLongArray(System.Int64[] array)
    // Offset: 0x1924B0C
    static System::IntPtr ToLongArray(::Array<int64_t>* array);
    // static public System.IntPtr ToShortArray(System.Int16[] array)
    // Offset: 0x1924B88
    static System::IntPtr ToShortArray(::Array<int16_t>* array);
    // static public System.IntPtr ToByteArray(System.Byte[] array)
    // Offset: 0x1924C04
    static System::IntPtr ToByteArray(::Array<uint8_t>* array);
    // static public System.IntPtr ToSByteArray(System.SByte[] array)
    // Offset: 0x1924C80
    static System::IntPtr ToSByteArray(::Array<int8_t>* array);
    // static public System.IntPtr ToBooleanArray(System.Boolean[] array)
    // Offset: 0x1924CFC
    static System::IntPtr ToBooleanArray(::Array<bool>* array);
    // static public System.IntPtr ToIntArray(System.Int32[] array)
    // Offset: 0x1924D78
    static System::IntPtr ToIntArray(::Array<int>* array);
    // static public System.IntPtr GetObjectArrayElement(System.IntPtr array, System.Int32 index)
    // Offset: 0x1924DF4
    static System::IntPtr GetObjectArrayElement(System::IntPtr array, int index);
    // static public System.Int32 GetArrayLength(System.IntPtr array)
    // Offset: 0x1924E80
    static int GetArrayLength(System::IntPtr array);
  }; // UnityEngine.AndroidJNISafe
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJNISafe*, "UnityEngine", "AndroidJNISafe");
#pragma pack(pop)