// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ConcurrentSetItem`2
  template<typename KeyType, typename ItemType>
  class ConcurrentSetItem_2 : public ::Il2CppObject {
    static_assert((!std::is_complete_v<std::remove_pointer_t<ItemType>> || std::is_convertible_v<ItemType, System::Diagnostics::Tracing::ConcurrentSetItem_2<KeyType, ItemType>*>));
    public:
    // public System.Int32 Compare(ItemType other)
    // Offset: 0xFFFFFFFF
    int Compare(ItemType other) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", other));
    }
    // public System.Int32 Compare(KeyType key)
    // Offset: 0xFFFFFFFF
    int Compare(KeyType key) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", key));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConcurrentSetItem_2<KeyType, ItemType>* New_ctor() {
      return (ConcurrentSetItem_2<KeyType, ItemType>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentSetItem_2<KeyType, ItemType>*>::get())));
    }
  }; // System.Diagnostics.Tracing.ConcurrentSetItem`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::ConcurrentSetItem_2, "System.Diagnostics.Tracing", "ConcurrentSetItem`2");
#pragma pack(pop)
