// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Autogenerated type: OVRSimpleJSON.JSONNode/<get_Children>d__40
  class JSONNode::$get_Children$d__40 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>, public System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private OVRSimpleJSON.JSONNode <>2__current
    // Offset: 0x18
    OVRSimpleJSON::JSONNode* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xF5350C
    static JSONNode::$get_Children$d__40* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF56E70
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xF56E74
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private OVRSimpleJSON.JSONNode System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current()
    // Offset: 0xF56E8C
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    OVRSimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF56E94
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF56EF4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<OVRSimpleJSON.JSONNode> System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator()
    // Offset: 0xF56EFC
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xF56F94
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // OVRSimpleJSON.JSONNode/<get_Children>d__40
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode::$get_Children$d__40*, "OVRSimpleJSON", "JSONNode/<get_Children>d__40");
#pragma pack(pop)
