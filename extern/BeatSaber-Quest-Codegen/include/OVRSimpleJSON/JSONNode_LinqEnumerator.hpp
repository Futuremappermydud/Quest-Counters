// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: OVRSimpleJSON.JSONNode/Enumerator
#include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Autogenerated type: OVRSimpleJSON.JSONNode/LinqEnumerator
  class JSONNode::LinqEnumerator : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>, public System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>> {
    public:
    // private OVRSimpleJSON.JSONNode m_Node
    // Offset: 0x10
    OVRSimpleJSON::JSONNode* m_Node;
    // private OVRSimpleJSON.JSONNode/Enumerator m_Enumerator
    // Offset: 0x18
    OVRSimpleJSON::JSONNode::Enumerator m_Enumerator;
    // System.Void .ctor(OVRSimpleJSON.JSONNode aNode)
    // Offset: 0xF5379C
    static JSONNode::LinqEnumerator* New_ctor(OVRSimpleJSON::JSONNode* aNode);
    // public System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,OVRSimpleJSON.JSONNode>> GetEnumerator()
    // Offset: 0xF57AE0
    System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>* GetEnumerator();
    // public System.Collections.Generic.KeyValuePair`2<System.String,OVRSimpleJSON.JSONNode> get_Current()
    // Offset: 0xF57A2C
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*> get_Current();
    // Creating proxy method: System_Collections_Generic_IEnumerator_1_get_Current
    // Maps to method: get_Current
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*> System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF57A34
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0xF57AA0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // public System.Void Dispose()
    // Offset: 0xF57AA8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void Reset()
    // Offset: 0xF57B44
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xF57BFC
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // OVRSimpleJSON.JSONNode/LinqEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode::LinqEnumerator*, "OVRSimpleJSON", "JSONNode/LinqEnumerator");
#pragma pack(pop)