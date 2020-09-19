// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.DateTimeFormat
  class DateTimeFormat : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.TimeSpan NullOffset
    static System::TimeSpan _get_NullOffset();
    // Set static field: static readonly System.TimeSpan NullOffset
    static void _set_NullOffset(System::TimeSpan value);
    // Get static field: static System.Char[] allStandardFormats
    static ::Array<::Il2CppChar>* _get_allStandardFormats();
    // Set static field: static System.Char[] allStandardFormats
    static void _set_allStandardFormats(::Array<::Il2CppChar>* value);
    // Get static field: static System.String[] fixedNumberFormats
    static ::Array<::Il2CppString*>* _get_fixedNumberFormats();
    // Set static field: static System.String[] fixedNumberFormats
    static void _set_fixedNumberFormats(::Array<::Il2CppString*>* value);
    // static System.Void FormatDigits(System.Text.StringBuilder outputBuffer, System.Int32 value, System.Int32 len)
    // Offset: 0x10D3968
    static void FormatDigits(System::Text::StringBuilder* outputBuffer, int value, int len);
    // static System.Void FormatDigits(System.Text.StringBuilder outputBuffer, System.Int32 value, System.Int32 len, System.Boolean overrideLengthLimit)
    // Offset: 0x10D39E8
    static void FormatDigits(System::Text::StringBuilder* outputBuffer, int value, int len, bool overrideLengthLimit);
    // static private System.Void HebrewFormatDigits(System.Text.StringBuilder outputBuffer, System.Int32 digits)
    // Offset: 0x10D3AC4
    static void HebrewFormatDigits(System::Text::StringBuilder* outputBuffer, int digits);
    // static System.Int32 ParseRepeatPattern(System.String format, System.Int32 pos, System.Char patternChar)
    // Offset: 0x10D3B50
    static int ParseRepeatPattern(::Il2CppString* format, int pos, ::Il2CppChar patternChar);
    // static private System.String FormatDayOfWeek(System.Int32 dayOfWeek, System.Int32 repeat, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D3BC4
    static ::Il2CppString* FormatDayOfWeek(int dayOfWeek, int repeat, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.String FormatMonth(System.Int32 month, System.Int32 repeatCount, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D3BFC
    static ::Il2CppString* FormatMonth(int month, int repeatCount, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.String FormatHebrewMonthName(System.DateTime time, System.Int32 month, System.Int32 repeatCount, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D3C34
    static ::Il2CppString* FormatHebrewMonthName(System::DateTime time, int month, int repeatCount, System::Globalization::DateTimeFormatInfo* dtfi);
    // static System.Int32 ParseQuoteString(System.String format, System.Int32 pos, System.Text.StringBuilder result)
    // Offset: 0x10D3CF8
    static int ParseQuoteString(::Il2CppString* format, int pos, System::Text::StringBuilder* result);
    // static System.Int32 ParseNextChar(System.String format, System.Int32 pos)
    // Offset: 0x10D3EC0
    static int ParseNextChar(::Il2CppString* format, int pos);
    // static private System.Boolean IsUseGenitiveForm(System.String format, System.Int32 index, System.Int32 tokenLen, System.Char patternToMatch)
    // Offset: 0x10D3F00
    static bool IsUseGenitiveForm(::Il2CppString* format, int index, int tokenLen, ::Il2CppChar patternToMatch);
    // static private System.String FormatCustomized(System.DateTime dateTime, System.String format, System.Globalization.DateTimeFormatInfo dtfi, System.TimeSpan offset)
    // Offset: 0x10D4040
    static ::Il2CppString* FormatCustomized(System::DateTime dateTime, ::Il2CppString* format, System::Globalization::DateTimeFormatInfo* dtfi, System::TimeSpan offset);
    // static private System.Void FormatCustomizedTimeZone(System.DateTime dateTime, System.TimeSpan offset, System.String format, System.Int32 tokenLen, System.Boolean timeOnly, System.Text.StringBuilder result)
    // Offset: 0x10D4DE0
    static void FormatCustomizedTimeZone(System::DateTime dateTime, System::TimeSpan offset, ::Il2CppString* format, int tokenLen, bool timeOnly, System::Text::StringBuilder* result);
    // static private System.Void FormatCustomizedRoundripTimeZone(System.DateTime dateTime, System.TimeSpan offset, System.Text.StringBuilder result)
    // Offset: 0x10D511C
    static void FormatCustomizedRoundripTimeZone(System::DateTime dateTime, System::TimeSpan offset, System::Text::StringBuilder* result);
    // static System.String GetRealFormat(System.String format, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D534C
    static ::Il2CppString* GetRealFormat(::Il2CppString* format, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.String ExpandPredefinedFormat(System.String format, ref System.DateTime dateTime, ref System.Globalization.DateTimeFormatInfo dtfi, ref System.TimeSpan offset)
    // Offset: 0x10D55F8
    static ::Il2CppString* ExpandPredefinedFormat(::Il2CppString* format, System::DateTime& dateTime, System::Globalization::DateTimeFormatInfo*& dtfi, System::TimeSpan& offset);
    // static System.String Format(System.DateTime dateTime, System.String format, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x10D2468
    static ::Il2CppString* Format(System::DateTime dateTime, ::Il2CppString* format, System::Globalization::DateTimeFormatInfo* dtfi);
    // static System.String Format(System.DateTime dateTime, System.String format, System.Globalization.DateTimeFormatInfo dtfi, System.TimeSpan offset)
    // Offset: 0x10D59CC
    static ::Il2CppString* Format(System::DateTime dateTime, ::Il2CppString* format, System::Globalization::DateTimeFormatInfo* dtfi, System::TimeSpan offset);
    // static System.Void InvalidFormatForLocal(System.String format, System.DateTime dateTime)
    // Offset: 0x10D59C8
    static void InvalidFormatForLocal(::Il2CppString* format, System::DateTime dateTime);
    // static System.Void InvalidFormatForUtc(System.String format, System.DateTime dateTime)
    // Offset: 0x10D5348
    static void InvalidFormatForUtc(::Il2CppString* format, System::DateTime dateTime);
    // static private System.Void .cctor()
    // Offset: 0x10D5C04
    static void _cctor();
  }; // System.DateTimeFormat
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeFormat*, "System", "DateTimeFormat");
#pragma pack(pop)