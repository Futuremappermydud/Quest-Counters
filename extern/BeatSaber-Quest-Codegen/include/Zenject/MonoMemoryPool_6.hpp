// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPool`6
#include "Zenject/MemoryPool_6.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MonoMemoryPool`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class MonoMemoryPool_6 : public Zenject::MemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue> {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TValue>> || std::is_convertible_v<TValue, UnityEngine::Component*>));
    public:
    // private UnityEngine.Transform _originalParent
    // Offset: 0x0
    UnityEngine::Transform* originalParent;
    // Creating conversion operator: operator UnityEngine::Transform*
    constexpr operator UnityEngine::Transform*() const noexcept {
      return originalParent;
    }
    // protected System.Void OnCreated(TValue item)
    // Offset: 0xFFFFFFFF
    void OnCreated(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnCreated", item));
    }
    // protected System.Void OnDestroyed(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDestroyed(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroyed", item));
    }
    // protected System.Void OnSpawned(TValue item)
    // Offset: 0xFFFFFFFF
    void OnSpawned(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnSpawned", item));
    }
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDespawned(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", item));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`6
    // Base method: System.Void MemoryPool`6::.ctor()
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* New_ctor() {
      return (MonoMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get())));
    }
  }; // Zenject.MonoMemoryPool`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoMemoryPool_6, "Zenject", "MonoMemoryPool`6");
#pragma pack(pop)
