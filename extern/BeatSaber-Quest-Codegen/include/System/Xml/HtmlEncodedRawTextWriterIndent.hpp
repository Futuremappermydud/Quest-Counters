// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.HtmlEncodedRawTextWriter
#include "System/Xml/HtmlEncodedRawTextWriter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.HtmlEncodedRawTextWriterIndent
  class HtmlEncodedRawTextWriterIndent : public System::Xml::HtmlEncodedRawTextWriter {
    public:
    // private System.Int32 indentLevel
    // Offset: 0xE4
    int indentLevel;
    // private System.Int32 endBlockPos
    // Offset: 0xE8
    int endBlockPos;
    // private System.String indentChars
    // Offset: 0xF0
    ::Il2CppString* indentChars;
    // private System.Boolean newLineOnAttributes
    // Offset: 0xF8
    bool newLineOnAttributes;
    // private System.Void WriteIndent()
    // Offset: 0x119C9D4
    void WriteIndent();
    // public System.Void .ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    // Offset: 0x119C72C
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::.ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    static HtmlEncodedRawTextWriterIndent* New_ctor(System::IO::TextWriter* writer, System::Xml::XmlWriterSettings* settings);
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x119C7A8
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    static HtmlEncodedRawTextWriterIndent* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x119C7E0
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x119C808
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x119CA20
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::StartElementContent()
    void StartElementContent();
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x119CAA8
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x119CB48
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // protected override System.Void FlushBuffer()
    // Offset: 0x119CBBC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::FlushBuffer()
    void FlushBuffer();
    // private System.Void Init(System.Xml.XmlWriterSettings settings)
    // Offset: 0x119C764
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::Init(System.Xml.XmlWriterSettings settings)
    void Init(System::Xml::XmlWriterSettings* settings);
  }; // System.Xml.HtmlEncodedRawTextWriterIndent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::HtmlEncodedRawTextWriterIndent*, "System.Xml", "HtmlEncodedRawTextWriterIndent");
#pragma pack(pop)
