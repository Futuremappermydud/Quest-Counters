// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.TestCommandPcHelper
  class TestCommandPcHelper : public ::Il2CppObject {
    public:
    // public System.Void SetEnumeratorPC(System.Collections.IEnumerator enumerator, System.Int32 pc)
    // Offset: 0xE44F08
    void SetEnumeratorPC(System::Collections::IEnumerator* enumerator, int pc);
    // public System.Int32 GetEnumeratorPC(System.Collections.IEnumerator enumerator)
    // Offset: 0xE44F0C
    int GetEnumeratorPC(System::Collections::IEnumerator* enumerator);
    // public System.Void .ctor()
    // Offset: 0xE44F14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestCommandPcHelper* New_ctor();
  }; // UnityEngine.TestTools.TestCommandPcHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestCommandPcHelper*, "UnityEngine.TestTools", "TestCommandPcHelper");
#pragma pack(pop)
