// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass64_0
  class FromBinder::$$c__DisplayClass64_0 : public ::Il2CppObject {
    public:
    // public System.Type concreteType
    // Offset: 0x10
    System::Type* concreteType;
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return concreteType;
    }
    // System.Collections.Generic.IEnumerable`1<System.Object> <FromComponentsSibling>b__1(Zenject.InjectContext ctx)
    // Offset: 0xF38918
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* $FromComponentsSibling$b__1(Zenject::InjectContext* ctx);
    // public System.Void .ctor()
    // Offset: 0xF36F7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass64_0* New_ctor();
  }; // Zenject.FromBinder/<>c__DisplayClass64_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass64_0*, "Zenject", "FromBinder/<>c__DisplayClass64_0");
#pragma pack(pop)
