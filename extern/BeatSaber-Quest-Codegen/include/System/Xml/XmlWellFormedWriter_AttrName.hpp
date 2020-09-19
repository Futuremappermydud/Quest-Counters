// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlWellFormedWriter
#include "System/Xml/XmlWellFormedWriter.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlWellFormedWriter/AttrName
  struct XmlWellFormedWriter::AttrName : public System::ValueType {
    public:
    // System.String prefix
    // Offset: 0x0
    ::Il2CppString* prefix;
    // System.String namespaceUri
    // Offset: 0x8
    ::Il2CppString* namespaceUri;
    // System.String localName
    // Offset: 0x10
    ::Il2CppString* localName;
    // System.Int32 prev
    // Offset: 0x18
    int prev;
    // Creating value type constructor for type: AttrName
    constexpr AttrName(::Il2CppString* prefix_ = {}, ::Il2CppString* namespaceUri_ = {}, ::Il2CppString* localName_ = {}, int prev_ = {}) noexcept : prefix{prefix_}, namespaceUri{namespaceUri_}, localName{localName_}, prev{prev_} {}
    // System.Void Set(System.String prefix, System.String localName, System.String namespaceUri)
    // Offset: 0xA5E1E4
    void Set(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* namespaceUri);
    // System.Boolean IsDuplicate(System.String prefix, System.String localName, System.String namespaceUri)
    // Offset: 0xA5E1EC
    bool IsDuplicate(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* namespaceUri);
  }; // System.Xml.XmlWellFormedWriter/AttrName
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::AttrName, "System.Xml", "XmlWellFormedWriter/AttrName");
#pragma pack(pop)
