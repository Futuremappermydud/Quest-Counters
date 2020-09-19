// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlCharType
  struct XmlCharType : public System::ValueType {
    public:
    // System.Byte[] charProperties
    // Offset: 0x0
    ::Array<uint8_t>* charProperties;
    // Creating value type constructor for type: XmlCharType
    constexpr XmlCharType(::Array<uint8_t>* charProperties_ = {}) noexcept : charProperties{charProperties_} {}
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return charProperties;
    }
    // Get static field: static private System.Object s_Lock
    static ::Il2CppObject* _get_s_Lock();
    // Set static field: static private System.Object s_Lock
    static void _set_s_Lock(::Il2CppObject* value);
    // Get static field: static private System.Byte[] s_CharProperties
    static ::Array<uint8_t>* _get_s_CharProperties();
    // Set static field: static private System.Byte[] s_CharProperties
    static void _set_s_CharProperties(::Array<uint8_t>* value);
    // static private System.Object get_StaticLock()
    // Offset: 0x11A36AC
    static ::Il2CppObject* get_StaticLock();
    // static private System.Void InitInstance()
    // Offset: 0x11A373C
    static void InitInstance();
    // static private System.Void SetProperties(System.String ranges, System.Byte value)
    // Offset: 0x11A3900
    static void SetProperties(::Il2CppString* ranges, uint8_t value);
    // private System.Void .ctor(System.Byte[] charProperties)
    // Offset: 0xA42ABC
    static XmlCharType* New_ctor(::Array<uint8_t>* charProperties);
    // static public System.Xml.XmlCharType get_Instance()
    // Offset: 0x11A1A44
    static System::Xml::XmlCharType get_Instance();
    // public System.Boolean IsWhiteSpace(System.Char ch)
    // Offset: 0xA42AC4
    bool IsWhiteSpace(::Il2CppChar ch);
    // public System.Boolean IsCharData(System.Char ch)
    // Offset: 0xA42ACC
    bool IsCharData(::Il2CppChar ch);
    // public System.Boolean IsPubidChar(System.Char ch)
    // Offset: 0xA42AD4
    bool IsPubidChar(::Il2CppChar ch);
    // System.Boolean IsTextChar(System.Char ch)
    // Offset: 0xA42AD8
    bool IsTextChar(::Il2CppChar ch);
    // static System.Boolean IsHighSurrogate(System.Int32 ch)
    // Offset: 0x11A3B6C
    static bool IsHighSurrogate(int ch);
    // static System.Boolean IsLowSurrogate(System.Int32 ch)
    // Offset: 0x11A3B90
    static bool IsLowSurrogate(int ch);
    // static System.Boolean IsSurrogate(System.Int32 ch)
    // Offset: 0x11A3BA0
    static bool IsSurrogate(int ch);
    // static System.Int32 CombineSurrogateChar(System.Int32 lowChar, System.Int32 highChar)
    // Offset: 0x11999D8
    static int CombineSurrogateChar(int lowChar, int highChar);
    // System.Boolean IsOnlyWhitespace(System.String str)
    // Offset: 0xA42AE0
    bool IsOnlyWhitespace(::Il2CppString* str);
    // System.Int32 IsOnlyWhitespaceWithPos(System.String str)
    // Offset: 0xA42B00
    int IsOnlyWhitespaceWithPos(::Il2CppString* str);
    // System.Int32 IsOnlyCharData(System.String str)
    // Offset: 0xA42B08
    int IsOnlyCharData(::Il2CppString* str);
    // System.Int32 IsPublicId(System.String str)
    // Offset: 0xA42B10
    int IsPublicId(::Il2CppString* str);
    // static private System.Boolean InRange(System.Int32 value, System.Int32 start, System.Int32 end)
    // Offset: 0x11A3B7C
    static bool InRange(int value, int start, int end);
  }; // System.Xml.XmlCharType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlCharType, "System.Xml", "XmlCharType");
#pragma pack(pop)
