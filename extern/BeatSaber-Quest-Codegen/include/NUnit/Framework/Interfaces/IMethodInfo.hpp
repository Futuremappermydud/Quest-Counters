// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <initializer_list>
// Including type: NUnit.Framework.Interfaces.IReflectionInfo
#include "NUnit/Framework/Interfaces/IReflectionInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IParameterInfo
  class IParameterInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
template<class T>
struct Array;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.IMethodInfo
  class IMethodInfo : public NUnit::Framework::Interfaces::IReflectionInfo {
    public:
    // public NUnit.Framework.Interfaces.ITypeInfo get_TypeInfo()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITypeInfo* get_TypeInfo();
    // public System.Reflection.MethodInfo get_MethodInfo()
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* get_MethodInfo();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
    // public System.Boolean get_IsAbstract()
    // Offset: 0xFFFFFFFF
    bool get_IsAbstract();
    // public System.Boolean get_IsPublic()
    // Offset: 0xFFFFFFFF
    bool get_IsPublic();
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0xFFFFFFFF
    bool get_ContainsGenericParameters();
    // public System.Boolean get_IsGenericMethodDefinition()
    // Offset: 0xFFFFFFFF
    bool get_IsGenericMethodDefinition();
    // public NUnit.Framework.Interfaces.ITypeInfo get_ReturnType()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITypeInfo* get_ReturnType();
    // public NUnit.Framework.Interfaces.IParameterInfo[] GetParameters()
    // Offset: 0xFFFFFFFF
    ::Array<NUnit::Framework::Interfaces::IParameterInfo*>* GetParameters();
    // public NUnit.Framework.Interfaces.IMethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::IMethodInfo* MakeGenericMethod(::Array<System::Type*>* typeArguments);
    // Creating initializer_list -> params proxy for: NUnit.Framework.Interfaces.IMethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    NUnit::Framework::Interfaces::IMethodInfo* MakeGenericMethod(std::initializer_list<System::Type*> typeArguments);
    // Creating TArgs -> initializer_list proxy for: NUnit.Framework.Interfaces.IMethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    template<class ...TParams>
    NUnit::Framework::Interfaces::IMethodInfo* MakeGenericMethod(TParams&&... typeArguments) {
      return MakeGenericMethod({typeArguments...});
    }
    // public System.Object Invoke(System.Object fixture, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* Invoke(::Il2CppObject* fixture, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object Invoke(System.Object fixture, params System.Object[] args)
    ::Il2CppObject* Invoke(::Il2CppObject* fixture, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object Invoke(System.Object fixture, params System.Object[] args)
    template<class ...TParams>
    ::Il2CppObject* Invoke(::Il2CppObject* fixture, TParams&&... args) {
      return Invoke(fixture, {args...});
    }
  }; // NUnit.Framework.Interfaces.IMethodInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::IMethodInfo*, "NUnit.Framework.Interfaces", "IMethodInfo");
#pragma pack(pop)