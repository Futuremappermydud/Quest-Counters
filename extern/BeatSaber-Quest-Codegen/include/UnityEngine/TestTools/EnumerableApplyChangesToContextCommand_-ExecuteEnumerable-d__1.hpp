// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.EnumerableApplyChangesToContextCommand
#include "UnityEngine/TestTools/EnumerableApplyChangesToContextCommand.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.EnumerableApplyChangesToContextCommand/<ExecuteEnumerable>d__1
  class EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // public UnityEngine.TestTools.EnumerableApplyChangesToContextCommand <>4__this
    // Offset: 0x28
    UnityEngine::TestTools::EnumerableApplyChangesToContextCommand* $$4__this;
    // private NUnit.Framework.Internal.ITestExecutionContext context
    // Offset: 0x30
    NUnit::Framework::Internal::ITestExecutionContext* context;
    // public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    // Offset: 0x38
    NUnit::Framework::Internal::ITestExecutionContext* $$3__context;
    // private System.Collections.IEnumerator <>7__wrap1
    // Offset: 0x40
    System::Collections::IEnumerator* $$7__wrap1;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xE3F674
    static EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0xE3F6C8
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xE3F6AC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xE3F794
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xE3FBB8
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xE3FBC0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xE3FC20
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0xE3FC28
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xE3FCEC
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.TestTools.EnumerableApplyChangesToContextCommand/<ExecuteEnumerable>d__1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableApplyChangesToContextCommand::$ExecuteEnumerable$d__1*, "UnityEngine.TestTools", "EnumerableApplyChangesToContextCommand/<ExecuteEnumerable>d__1");
#pragma pack(pop)
