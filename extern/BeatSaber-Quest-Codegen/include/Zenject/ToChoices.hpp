// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ToChoices
  struct ToChoices : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ToChoices
    constexpr ToChoices(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Zenject.ToChoices Self
    static constexpr const int Self = 0;
    // Get static field: static public Zenject.ToChoices Self
    static Zenject::ToChoices _get_Self();
    // Set static field: static public Zenject.ToChoices Self
    static void _set_Self(Zenject::ToChoices value);
    // static field const value: static public Zenject.ToChoices Concrete
    static constexpr const int Concrete = 1;
    // Get static field: static public Zenject.ToChoices Concrete
    static Zenject::ToChoices _get_Concrete();
    // Set static field: static public Zenject.ToChoices Concrete
    static void _set_Concrete(Zenject::ToChoices value);
  }; // Zenject.ToChoices
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ToChoices, "Zenject", "ToChoices");
#pragma pack(pop)
