// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: RunState
  struct RunState;
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.ITestData
  class ITestData {
    public:
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Object[] get_Arguments()
    // Offset: 0xFFFFFFFF
    ::Array<::Il2CppObject*>* get_Arguments();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
  }; // NUnit.Framework.Interfaces.ITestData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITestData*, "NUnit.Framework.Interfaces", "ITestData");
#pragma pack(pop)