// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.RtFieldInfo
#include "System/Reflection/RtFieldInfo.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.RuntimeFieldHandle
#include "System/RuntimeFieldHandle.hpp"
// Including type: System.Reflection.FieldAttributes
#include "System/Reflection/FieldAttributes.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Skipping declaration: FieldInfo because it is already included!
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MonoField
  class MonoField : public System::Reflection::RtFieldInfo {
    public:
    // System.IntPtr klass
    // Offset: 0x10
    System::IntPtr klass;
    // System.RuntimeFieldHandle fhandle
    // Offset: 0x18
    System::RuntimeFieldHandle fhandle;
    // private System.String name
    // Offset: 0x20
    ::Il2CppString* name;
    // private System.Type type
    // Offset: 0x28
    System::Type* type;
    // private System.Reflection.FieldAttributes attrs
    // Offset: 0x30
    System::Reflection::FieldAttributes attrs;
    // private System.Type ResolveType()
    // Offset: 0x1152E68
    System::Type* ResolveType();
    // private System.Type GetParentType(System.Boolean declaring)
    // Offset: 0x1152F0C
    System::Type* GetParentType(bool declaring);
    // private System.Object GetValueInternal(System.Object obj)
    // Offset: 0x11530A8
    ::Il2CppObject* GetValueInternal(::Il2CppObject* obj);
    // static private System.Void SetValueInternal(System.Reflection.FieldInfo fi, System.Object obj, System.Object value)
    // Offset: 0x1153368
    static void SetValueInternal(System::Reflection::FieldInfo* fi, ::Il2CppObject* obj, ::Il2CppObject* value);
    // private System.Void CheckGeneric()
    // Offset: 0x1153250
    void CheckGeneric();
    // public override System.Reflection.FieldAttributes get_Attributes()
    // Offset: 0x1152E58
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Reflection.FieldAttributes FieldInfo::get_Attributes()
    System::Reflection::FieldAttributes get_Attributes();
    // public override System.RuntimeFieldHandle get_FieldHandle()
    // Offset: 0x1152E60
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.RuntimeFieldHandle FieldInfo::get_FieldHandle()
    System::RuntimeFieldHandle get_FieldHandle();
    // public override System.Type get_FieldType()
    // Offset: 0x1152E6C
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Type FieldInfo::get_FieldType()
    System::Type* get_FieldType();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1152F14
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Type get_DeclaringType()
    // Offset: 0x1152F1C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.String get_Name()
    // Offset: 0x1152F24
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1152F2C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1152FAC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1153024
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // override System.Int32 GetFieldOffset()
    // Offset: 0x11530A4
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Int32 FieldInfo::GetFieldOffset()
    int GetFieldOffset();
    // public override System.Object GetValue(System.Object obj)
    // Offset: 0x11530AC
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Object FieldInfo::GetValue(System.Object obj)
    ::Il2CppObject* GetValue(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x11532F8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Void SetValue(System.Object obj, System.Object val, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x115336C
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Void FieldInfo::SetValue(System.Object obj, System.Object val, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* val, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // public override System.Object GetRawConstantValue()
    // Offset: 0x1153604
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Object FieldInfo::GetRawConstantValue()
    ::Il2CppObject* GetRawConstantValue();
    // public override System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData()
    // Offset: 0x1153608
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> MemberInfo::GetCustomAttributesData()
    System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributesData();
    // public System.Void .ctor()
    // Offset: 0x1153610
    // Implemented from: System.Reflection.RtFieldInfo
    // Base method: System.Void RtFieldInfo::.ctor()
    // Base method: System.Void RuntimeFieldInfo::.ctor()
    // Base method: System.Void FieldInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoField* New_ctor();
  }; // System.Reflection.MonoField
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoField*, "System.Reflection", "MonoField");
#pragma pack(pop)