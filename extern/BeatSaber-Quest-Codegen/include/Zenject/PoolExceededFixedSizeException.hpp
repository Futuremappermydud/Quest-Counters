// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolExceededFixedSizeException
  class PoolExceededFixedSizeException : public System::Exception {
    public:
    // public System.Void .ctor(System.String errorMessage)
    // Offset: 0xFC4F00
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String errorMessage)
    static PoolExceededFixedSizeException* New_ctor(::Il2CppString* errorMessage);
  }; // Zenject.PoolExceededFixedSizeException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolExceededFixedSizeException*, "Zenject", "PoolExceededFixedSizeException");
#pragma pack(pop)