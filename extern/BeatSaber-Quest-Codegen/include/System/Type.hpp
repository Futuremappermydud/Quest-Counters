// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.Runtime.InteropServices._Type
#include "System/Runtime/InteropServices/_Type.hpp"
// Including type: System.RuntimeTypeHandle
#include "System/RuntimeTypeHandle.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberFilter
  class MemberFilter;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: AssemblyName
  class AssemblyName;
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: ParameterModifier
  struct ParameterModifier;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: TypeFilter
  class TypeFilter;
  // Forward declaring type: EventInfo
  class EventInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: MemberTypes
  struct MemberTypes;
  // Forward declaring type: TypeAttributes
  struct TypeAttributes;
  // Forward declaring type: GenericParameterAttributes
  struct GenericParameterAttributes;
  // Forward declaring type: Module
  class Module;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`4<T1, T2, T3, TResult>
  template<typename T1, typename T2, typename T3, typename TResult>
  class Func_4;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Array
  class Array;
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Type
  class Type : public System::Reflection::MemberInfo, public System::Runtime::InteropServices::_Type {
    public:
    // System.RuntimeTypeHandle _impl
    // Offset: 0x10
    System::RuntimeTypeHandle impl;
    // Creating conversion operator: operator System::RuntimeTypeHandle
    constexpr operator System::RuntimeTypeHandle() const noexcept {
      return impl;
    }
    // Get static field: static public readonly System.Reflection.MemberFilter FilterAttribute
    static System::Reflection::MemberFilter* _get_FilterAttribute();
    // Set static field: static public readonly System.Reflection.MemberFilter FilterAttribute
    static void _set_FilterAttribute(System::Reflection::MemberFilter* value);
    // Get static field: static public readonly System.Reflection.MemberFilter FilterName
    static System::Reflection::MemberFilter* _get_FilterName();
    // Set static field: static public readonly System.Reflection.MemberFilter FilterName
    static void _set_FilterName(System::Reflection::MemberFilter* value);
    // Get static field: static public readonly System.Reflection.MemberFilter FilterNameIgnoreCase
    static System::Reflection::MemberFilter* _get_FilterNameIgnoreCase();
    // Set static field: static public readonly System.Reflection.MemberFilter FilterNameIgnoreCase
    static void _set_FilterNameIgnoreCase(System::Reflection::MemberFilter* value);
    // Get static field: static public readonly System.Object Missing
    static ::Il2CppObject* _get_Missing();
    // Set static field: static public readonly System.Object Missing
    static void _set_Missing(::Il2CppObject* value);
    // Get static field: static public readonly System.Char Delimiter
    static ::Il2CppChar _get_Delimiter();
    // Set static field: static public readonly System.Char Delimiter
    static void _set_Delimiter(::Il2CppChar value);
    // Get static field: static public readonly System.Type[] EmptyTypes
    static ::Array<System::Type*>* _get_EmptyTypes();
    // Set static field: static public readonly System.Type[] EmptyTypes
    static void _set_EmptyTypes(::Array<System::Type*>* value);
    // Get static field: static private System.Reflection.Binder defaultBinder
    static System::Reflection::Binder* _get_defaultBinder();
    // Set static field: static private System.Reflection.Binder defaultBinder
    static void _set_defaultBinder(System::Reflection::Binder* value);
    // static field const value: static private System.Reflection.BindingFlags DefaultLookup
    static constexpr const int DefaultLookup = 28;
    // Get static field: static private System.Reflection.BindingFlags DefaultLookup
    static System::Reflection::BindingFlags _get_DefaultLookup();
    // Set static field: static private System.Reflection.BindingFlags DefaultLookup
    static void _set_DefaultLookup(System::Reflection::BindingFlags value);
    // static field const value: static System.Reflection.BindingFlags DeclaredOnlyLookup
    static constexpr const int DeclaredOnlyLookup = 62;
    // Get static field: static System.Reflection.BindingFlags DeclaredOnlyLookup
    static System::Reflection::BindingFlags _get_DeclaredOnlyLookup();
    // Set static field: static System.Reflection.BindingFlags DeclaredOnlyLookup
    static void _set_DeclaredOnlyLookup(System::Reflection::BindingFlags value);
    // public System.Reflection.MethodBase get_DeclaringMethod()
    // Offset: 0x1795FE8
    System::Reflection::MethodBase* get_DeclaringMethod();
    // static public System.Type GetType(System.String typeName, System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly> assemblyResolver, System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type> typeResolver, System.Boolean throwOnError)
    // Offset: 0x1795FF8
    static System::Type* GetType(::Il2CppString* typeName, System::Func_2<System::Reflection::AssemblyName*, System::Reflection::Assembly*>* assemblyResolver, System::Func_4<System::Reflection::Assembly*, ::Il2CppString*, bool, System::Type*>* typeResolver, bool throwOnError);
    // public System.Type MakePointerType()
    // Offset: 0x1796050
    System::Type* MakePointerType();
    // public System.Type MakeByRefType()
    // Offset: 0x17960B0
    System::Type* MakeByRefType();
    // public System.Type MakeArrayType()
    // Offset: 0x1796110
    System::Type* MakeArrayType();
    // public System.Type MakeArrayType(System.Int32 rank)
    // Offset: 0x1796170
    System::Type* MakeArrayType(int rank);
    // static public System.TypeCode GetTypeCode(System.Type type)
    // Offset: 0x17961D0
    static System::TypeCode GetTypeCode(System::Type* type);
    // protected System.TypeCode GetTypeCodeImpl()
    // Offset: 0x1796264
    System::TypeCode GetTypeCodeImpl();
    // static public System.Reflection.Binder get_DefaultBinder()
    // Offset: 0x1796384
    static System::Reflection::Binder* get_DefaultBinder();
    // static private System.Void CreateBinder()
    // Offset: 0x179642C
    static void CreateBinder();
    // public System.Object InvokeMember(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* InvokeMember(::Il2CppString* name, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Il2CppObject* target, ::Array<::Il2CppObject*>* args, ::Array<System::Reflection::ParameterModifier>* modifiers, System::Globalization::CultureInfo* culture, ::Array<::Il2CppString*>* namedParameters);
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0xFFFFFFFF
    System::Reflection::Assembly* get_Assembly();
    // public System.RuntimeTypeHandle get_TypeHandle()
    // Offset: 0x17964EC
    System::RuntimeTypeHandle get_TypeHandle();
    // static public System.RuntimeTypeHandle GetTypeHandle(System.Object o)
    // Offset: 0x179654C
    static System::RuntimeTypeHandle GetTypeHandle(::Il2CppObject* o);
    // public System.String get_FullName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_FullName();
    // public System.String get_Namespace()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Namespace();
    // public System.String get_AssemblyQualifiedName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_AssemblyQualifiedName();
    // public System.Int32 GetArrayRank()
    // Offset: 0x1796654
    int GetArrayRank();
    // public System.Type get_BaseType()
    // Offset: 0xFFFFFFFF
    System::Type* get_BaseType();
    // public System.Reflection.ConstructorInfo GetConstructor(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x17966D4
    System::Reflection::ConstructorInfo* GetConstructor(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.ConstructorInfo GetConstructor(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x179680C
    System::Reflection::ConstructorInfo* GetConstructor(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.ConstructorInfo GetConstructor(System.Type[] types)
    // Offset: 0x1796940
    System::Reflection::ConstructorInfo* GetConstructor(::Array<System::Type*>* types);
    // protected System.Reflection.ConstructorInfo GetConstructorImpl(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xFFFFFFFF
    System::Reflection::ConstructorInfo* GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.ConstructorInfo[] GetConstructors()
    // Offset: 0x1796954
    ::Array<System::Reflection::ConstructorInfo*>* GetConstructors();
    // public System.Reflection.ConstructorInfo[] GetConstructors(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::ConstructorInfo*>* GetConstructors(System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.MethodInfo GetMethod(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1796968
    System::Reflection::MethodInfo* GetMethod(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.MethodInfo GetMethod(System.String name, System.Type[] types)
    // Offset: 0x1796AC4
    System::Reflection::MethodInfo* GetMethod(::Il2CppString* name, ::Array<System::Type*>* types);
    // public System.Reflection.MethodInfo GetMethod(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1796C0C
    System::Reflection::MethodInfo* GetMethod(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.MethodInfo GetMethod(System.String name)
    // Offset: 0x1796CC4
    System::Reflection::MethodInfo* GetMethod(::Il2CppString* name);
    // protected System.Reflection.MethodInfo GetMethodImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetMethodImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.MethodInfo[] GetMethods()
    // Offset: 0x1796D78
    ::Array<System::Reflection::MethodInfo*>* GetMethods();
    // public System.Reflection.MethodInfo[] GetMethods(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::MethodInfo*>* GetMethods(System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.FieldInfo GetField(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    System::Reflection::FieldInfo* GetField(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.FieldInfo GetField(System.String name)
    // Offset: 0x1796D8C
    System::Reflection::FieldInfo* GetField(::Il2CppString* name);
    // public System.Reflection.FieldInfo[] GetFields()
    // Offset: 0x1796DA0
    ::Array<System::Reflection::FieldInfo*>* GetFields();
    // public System.Reflection.FieldInfo[] GetFields(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::FieldInfo*>* GetFields(System::Reflection::BindingFlags bindingAttr);
    // public System.Type[] GetInterfaces()
    // Offset: 0xFFFFFFFF
    ::Array<System::Type*>* GetInterfaces();
    // public System.Type[] FindInterfaces(System.Reflection.TypeFilter filter, System.Object filterCriteria)
    // Offset: 0x1796DB4
    ::Array<System::Type*>* FindInterfaces(System::Reflection::TypeFilter* filter, ::Il2CppObject* filterCriteria);
    // public System.Reflection.EventInfo GetEvent(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    System::Reflection::EventInfo* GetEvent(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.PropertyInfo GetProperty(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1796FEC
    System::Reflection::PropertyInfo* GetProperty(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.PropertyInfo GetProperty(System.String name, System.Type returnType, System.Type[] types)
    // Offset: 0x17970A4
    System::Reflection::PropertyInfo* GetProperty(::Il2CppString* name, System::Type* returnType, ::Array<System::Type*>* types);
    // public System.Reflection.PropertyInfo GetProperty(System.String name, System.Type returnType)
    // Offset: 0x1797188
    System::Reflection::PropertyInfo* GetProperty(::Il2CppString* name, System::Type* returnType);
    // public System.Reflection.PropertyInfo GetProperty(System.String name)
    // Offset: 0x1797280
    System::Reflection::PropertyInfo* GetProperty(::Il2CppString* name);
    // protected System.Reflection.PropertyInfo GetPropertyImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xFFFFFFFF
    System::Reflection::PropertyInfo* GetPropertyImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Type* returnType, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.PropertyInfo[] GetProperties(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::PropertyInfo*>* GetProperties(System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.PropertyInfo[] GetProperties()
    // Offset: 0x1797334
    ::Array<System::Reflection::PropertyInfo*>* GetProperties();
    // public System.Type GetNestedType(System.String name)
    // Offset: 0x1797348
    System::Type* GetNestedType(::Il2CppString* name);
    // public System.Type GetNestedType(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    System::Type* GetNestedType(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.MemberInfo[] GetMember(System.String name)
    // Offset: 0x179735C
    ::Array<System::Reflection::MemberInfo*>* GetMember(::Il2CppString* name);
    // public System.Reflection.MemberInfo[] GetMember(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1797370
    ::Array<System::Reflection::MemberInfo*>* GetMember(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.MemberInfo[] GetMember(System.String name, System.Reflection.MemberTypes type, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1797388
    ::Array<System::Reflection::MemberInfo*>* GetMember(::Il2CppString* name, System::Reflection::MemberTypes type, System::Reflection::BindingFlags bindingAttr);
    // public System.Boolean get_IsNested()
    // Offset: 0x1797408
    bool get_IsNested();
    // public System.Reflection.TypeAttributes get_Attributes()
    // Offset: 0x1797488
    System::Reflection::TypeAttributes get_Attributes();
    // public System.Reflection.GenericParameterAttributes get_GenericParameterAttributes()
    // Offset: 0x1797498
    System::Reflection::GenericParameterAttributes get_GenericParameterAttributes();
    // public System.Boolean get_IsNotPublic()
    // Offset: 0x17974F8
    bool get_IsNotPublic();
    // public System.Boolean get_IsPublic()
    // Offset: 0x1797520
    bool get_IsPublic();
    // public System.Boolean get_IsNestedPublic()
    // Offset: 0x179754C
    bool get_IsNestedPublic();
    // public System.Boolean get_IsNestedAssembly()
    // Offset: 0x1797578
    bool get_IsNestedAssembly();
    // public System.Boolean get_IsExplicitLayout()
    // Offset: 0x17975A4
    bool get_IsExplicitLayout();
    // public System.Boolean get_IsClass()
    // Offset: 0x17975D0
    bool get_IsClass();
    // public System.Boolean get_IsInterface()
    // Offset: 0x1797634
    bool get_IsInterface();
    // public System.Boolean get_IsValueType()
    // Offset: 0x1797624
    bool get_IsValueType();
    // public System.Boolean get_IsAbstract()
    // Offset: 0x1797708
    bool get_IsAbstract();
    // public System.Boolean get_IsSealed()
    // Offset: 0x179772C
    bool get_IsSealed();
    // public System.Boolean get_IsEnum()
    // Offset: 0x1797750
    bool get_IsEnum();
    // public System.Boolean get_IsSerializable()
    // Offset: 0x17977CC
    bool get_IsSerializable();
    // public System.Boolean get_IsArray()
    // Offset: 0x17978CC
    bool get_IsArray();
    // System.Boolean get_IsSzArray()
    // Offset: 0x17978DC
    bool get_IsSzArray();
    // public System.Boolean get_IsGenericType()
    // Offset: 0x17978E4
    bool get_IsGenericType();
    // public System.Boolean get_IsGenericTypeDefinition()
    // Offset: 0x17978EC
    bool get_IsGenericTypeDefinition();
    // public System.Boolean get_IsGenericParameter()
    // Offset: 0x17978F4
    bool get_IsGenericParameter();
    // public System.Int32 get_GenericParameterPosition()
    // Offset: 0x17978FC
    int get_GenericParameterPosition();
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0x179797C
    bool get_ContainsGenericParameters();
    // public System.Type[] GetGenericParameterConstraints()
    // Offset: 0x1797AEC
    ::Array<System::Type*>* GetGenericParameterConstraints();
    // public System.Boolean get_IsByRef()
    // Offset: 0x1797BB8
    bool get_IsByRef();
    // public System.Boolean get_IsPointer()
    // Offset: 0x1797BC8
    bool get_IsPointer();
    // public System.Boolean get_IsPrimitive()
    // Offset: 0x1797BD8
    bool get_IsPrimitive();
    // public System.Boolean get_IsCOMObject()
    // Offset: 0x1797BE8
    bool get_IsCOMObject();
    // public System.Boolean get_HasElementType()
    // Offset: 0x1797A80
    bool get_HasElementType();
    // public System.Boolean get_IsContextful()
    // Offset: 0x1797BF8
    bool get_IsContextful();
    // public System.Boolean get_IsMarshalByRef()
    // Offset: 0x1797C08
    bool get_IsMarshalByRef();
    // protected System.Boolean IsValueTypeImpl()
    // Offset: 0x1797C18
    bool IsValueTypeImpl();
    // protected System.Reflection.TypeAttributes GetAttributeFlagsImpl()
    // Offset: 0xFFFFFFFF
    System::Reflection::TypeAttributes GetAttributeFlagsImpl();
    // protected System.Boolean IsArrayImpl()
    // Offset: 0xFFFFFFFF
    bool IsArrayImpl();
    // protected System.Boolean IsByRefImpl()
    // Offset: 0xFFFFFFFF
    bool IsByRefImpl();
    // protected System.Boolean IsPointerImpl()
    // Offset: 0xFFFFFFFF
    bool IsPointerImpl();
    // protected System.Boolean IsPrimitiveImpl()
    // Offset: 0xFFFFFFFF
    bool IsPrimitiveImpl();
    // protected System.Boolean IsCOMObjectImpl()
    // Offset: 0xFFFFFFFF
    bool IsCOMObjectImpl();
    // public System.Type MakeGenericType(params System.Type[] typeArguments)
    // Offset: 0x1797C94
    System::Type* MakeGenericType(::Array<System::Type*>* typeArguments);
    // Creating initializer_list -> params proxy for: System.Type MakeGenericType(params System.Type[] typeArguments)
    System::Type* MakeGenericType(std::initializer_list<System::Type*> typeArguments);
    // Creating TArgs -> initializer_list proxy for: System.Type MakeGenericType(params System.Type[] typeArguments)
    template<class ...TParams>
    System::Type* MakeGenericType(TParams&&... typeArguments) {
      return MakeGenericType({typeArguments...});
    }
    // protected System.Boolean IsContextfulImpl()
    // Offset: 0x1797D14
    bool IsContextfulImpl();
    // protected System.Boolean IsMarshalByRefImpl()
    // Offset: 0x1797DA0
    bool IsMarshalByRefImpl();
    // public System.Type GetElementType()
    // Offset: 0xFFFFFFFF
    System::Type* GetElementType();
    // public System.Type[] GetGenericArguments()
    // Offset: 0x1797E2C
    ::Array<System::Type*>* GetGenericArguments();
    // public System.Type GetGenericTypeDefinition()
    // Offset: 0x1797EAC
    System::Type* GetGenericTypeDefinition();
    // protected System.Boolean HasElementTypeImpl()
    // Offset: 0xFFFFFFFF
    bool HasElementTypeImpl();
    // System.Type GetRootElementType()
    // Offset: 0x1797A90
    System::Type* GetRootElementType();
    // public System.String[] GetEnumNames()
    // Offset: 0x1797F2C
    ::Array<::Il2CppString*>* GetEnumNames();
    // public System.Array GetEnumValues()
    // Offset: 0x1798434
    System::Array* GetEnumValues();
    // private System.Array GetEnumRawConstantValues()
    // Offset: 0x179850C
    System::Array* GetEnumRawConstantValues();
    // private System.Void GetEnumData(out System.String[] enumNames, out System.Array enumValues)
    // Offset: 0x1798000
    void GetEnumData(::Array<::Il2CppString*>*& enumNames, System::Array*& enumValues);
    // public System.Type GetEnumUnderlyingType()
    // Offset: 0x1798538
    System::Type* GetEnumUnderlyingType();
    // public System.Boolean IsEnumDefined(System.Object value)
    // Offset: 0x1798638
    bool IsEnumDefined(::Il2CppObject* value);
    // public System.String GetEnumName(System.Object value)
    // Offset: 0x1798F04
    ::Il2CppString* GetEnumName(::Il2CppObject* value);
    // static private System.Int32 BinarySearch(System.Array array, System.Object value)
    // Offset: 0x1798DA0
    static int BinarySearch(System::Array* array, ::Il2CppObject* value);
    // static System.Boolean IsIntegerType(System.Type t)
    // Offset: 0x1798B40
    static bool IsIntegerType(System::Type* t);
    // public System.Type get_UnderlyingSystemType()
    // Offset: 0xFFFFFFFF
    System::Type* get_UnderlyingSystemType();
    // public System.Boolean IsSubclassOf(System.Type c)
    // Offset: 0x1799130
    bool IsSubclassOf(System::Type* c);
    // public System.Boolean IsInstanceOfType(System.Object o)
    // Offset: 0x1799208
    bool IsInstanceOfType(::Il2CppObject* o);
    // public System.Boolean IsAssignableFrom(System.Type c)
    // Offset: 0x1799250
    bool IsAssignableFrom(System::Type* c);
    // public System.Boolean IsEquivalentTo(System.Type other)
    // Offset: 0x17995F0
    bool IsEquivalentTo(System::Type* other);
    // System.Boolean ImplementInterface(System.Type ifaceType)
    // Offset: 0x1799474
    bool ImplementInterface(System::Type* ifaceType);
    // System.String FormatTypeName()
    // Offset: 0x1799664
    ::Il2CppString* FormatTypeName();
    // System.String FormatTypeName(System.Boolean serialization)
    // Offset: 0x1799678
    ::Il2CppString* FormatTypeName(bool serialization);
    // public System.Boolean Equals(System.Type o)
    // Offset: 0x17997F0
    bool Equals(System::Type* o);
    // static private System.Type internal_from_name(System.String name, System.Boolean throwOnError, System.Boolean ignoreCase)
    // Offset: 0x17998A8
    static System::Type* internal_from_name(::Il2CppString* name, bool throwOnError, bool ignoreCase);
    // static public System.Type GetType(System.String typeName)
    // Offset: 0x17998B4
    static System::Type* GetType(::Il2CppString* typeName);
    // static public System.Type GetType(System.String typeName, System.Boolean throwOnError)
    // Offset: 0x1799AE8
    static System::Type* GetType(::Il2CppString* typeName, bool throwOnError);
    // static public System.Type GetType(System.String typeName, System.Boolean throwOnError, System.Boolean ignoreCase)
    // Offset: 0x179994C
    static System::Type* GetType(::Il2CppString* typeName, bool throwOnError, bool ignoreCase);
    // static public System.Type GetTypeFromHandle(System.RuntimeTypeHandle handle)
    // Offset: 0x17952D4
    static System::Type* GetTypeFromHandle(System::RuntimeTypeHandle handle);
    // static private System.Type internal_from_handle(System.IntPtr handle)
    // Offset: 0x1799BC8
    static System::Type* internal_from_handle(System::IntPtr handle);
    // static private System.Void .cctor()
    // Offset: 0x1799BCC
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x1795FD0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    static Type* New_ctor();
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x1795FD8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // public override System.Type get_DeclaringType()
    // Offset: 0x1795FE0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1795FF0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Reflection.Module get_Module()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    System::Reflection::Module* get_Module();
    // public override System.String ToString()
    // Offset: 0x17996D8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1799740
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1799848
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::GetHashCode()
    int GetHashCode();
    // public System.Type GetType()
    // Offset: 0x17998A0
    // Implemented from: System.Object
    // Base method: System.Type Object::GetType()
    System::Type* GetType();
  }; // System.Type
  // static public System.Boolean op_Equality(System.Type left, System.Type right)
  // Offset: 0x1796258
  bool operator ==(System::Type* left, System::Type& right);
  // static public System.Boolean op_Inequality(System.Type left, System.Type right)
  // Offset: 0x1796378
  bool operator !=(System::Type* left, System::Type& right);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Type*, "System", "Type");
#pragma pack(pop)
