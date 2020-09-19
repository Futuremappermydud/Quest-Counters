// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.IPropertyBag
#include "NUnit/Framework/Interfaces/IPropertyBag.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.PropertyBag
  class PropertyBag : public ::Il2CppObject, public NUnit::Framework::Interfaces::IPropertyBag {
    public:
    // private System.Collections.Generic.Dictionary`2<System.String,System.Collections.IList> inner
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::IList*>* inner;
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::IList*>*
    constexpr operator System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::IList*>*() const noexcept {
      return inner;
    }
    // public System.Void Add(System.String key, System.Object value)
    // Offset: 0x18F0C34
    // Implemented from: NUnit.Framework.Interfaces.IPropertyBag
    // Base method: System.Void IPropertyBag::Add(System.String key, System.Object value)
    void Add(::Il2CppString* key, ::Il2CppObject* value);
    // public System.Void Set(System.String key, System.Object value)
    // Offset: 0x18F0D78
    // Implemented from: NUnit.Framework.Interfaces.IPropertyBag
    // Base method: System.Void IPropertyBag::Set(System.String key, System.Object value)
    void Set(::Il2CppString* key, ::Il2CppObject* value);
    // public System.Object Get(System.String key)
    // Offset: 0x18F0EB0
    // Implemented from: NUnit.Framework.Interfaces.IPropertyBag
    // Base method: System.Object IPropertyBag::Get(System.String key)
    ::Il2CppObject* Get(::Il2CppString* key);
    // public System.Boolean ContainsKey(System.String key)
    // Offset: 0x18F1020
    // Implemented from: NUnit.Framework.Interfaces.IPropertyBag
    // Base method: System.Boolean IPropertyBag::ContainsKey(System.String key)
    bool ContainsKey(::Il2CppString* key);
    // public System.Collections.Generic.ICollection`1<System.String> get_Keys()
    // Offset: 0x18F1088
    // Implemented from: NUnit.Framework.Interfaces.IPropertyBag
    // Base method: System.Collections.Generic.ICollection`1<System.String> IPropertyBag::get_Keys()
    System::Collections::Generic::ICollection_1<::Il2CppString*>* get_Keys();
    // public System.Collections.IList get_Item(System.String key)
    // Offset: 0x18F10E0
    // Implemented from: NUnit.Framework.Interfaces.IPropertyBag
    // Base method: System.Collections.IList IPropertyBag::get_Item(System.String key)
    System::Collections::IList* get_Item(::Il2CppString* key);
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x18F11A4
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::ToXml(System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x18F1218
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // public System.Void .ctor()
    // Offset: 0x18F1864
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PropertyBag* New_ctor();
  }; // NUnit.Framework.Internal.PropertyBag
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::PropertyBag*, "NUnit.Framework.Internal", "PropertyBag");
#pragma pack(pop)