// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Matchmaking
#include "Oculus/Platform/Matchmaking.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Matchmaking/CustomQuery
  class Matchmaking::CustomQuery : public ::Il2CppObject {
    public:
    // Nested type: Oculus::Platform::Matchmaking::CustomQuery::Criterion
    struct Criterion;
    // public System.Collections.Generic.Dictionary`2<System.String,System.Object> data
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* data;
    // public Oculus.Platform.Matchmaking/CustomQuery/Criterion[] criteria
    // Offset: 0x18
    ::Array<Oculus::Platform::Matchmaking::CustomQuery::Criterion>* criteria;
    // public System.IntPtr ToUnmanaged()
    // Offset: 0xE9B500
    System::IntPtr ToUnmanaged();
    // public System.Void .ctor()
    // Offset: 0xE9C9E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Matchmaking::CustomQuery* New_ctor();
  }; // Oculus.Platform.Matchmaking/CustomQuery
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Matchmaking::CustomQuery*, "Oculus.Platform", "Matchmaking/CustomQuery");
#pragma pack(pop)