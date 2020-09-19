// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.CsvReader
#include "Polyglot/CsvReader.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.CsvReader/ParsingMode
  struct CsvReader::ParsingMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ParsingMode
    constexpr ParsingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Polyglot.CsvReader/ParsingMode None
    static constexpr const int None = 0;
    // Get static field: static public Polyglot.CsvReader/ParsingMode None
    static Polyglot::CsvReader::ParsingMode _get_None();
    // Set static field: static public Polyglot.CsvReader/ParsingMode None
    static void _set_None(Polyglot::CsvReader::ParsingMode value);
    // static field const value: static public Polyglot.CsvReader/ParsingMode OutQuote
    static constexpr const int OutQuote = 1;
    // Get static field: static public Polyglot.CsvReader/ParsingMode OutQuote
    static Polyglot::CsvReader::ParsingMode _get_OutQuote();
    // Set static field: static public Polyglot.CsvReader/ParsingMode OutQuote
    static void _set_OutQuote(Polyglot::CsvReader::ParsingMode value);
    // static field const value: static public Polyglot.CsvReader/ParsingMode InQuote
    static constexpr const int InQuote = 2;
    // Get static field: static public Polyglot.CsvReader/ParsingMode InQuote
    static Polyglot::CsvReader::ParsingMode _get_InQuote();
    // Set static field: static public Polyglot.CsvReader/ParsingMode InQuote
    static void _set_InQuote(Polyglot::CsvReader::ParsingMode value);
  }; // Polyglot.CsvReader/ParsingMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::CsvReader::ParsingMode, "Polyglot", "CsvReader/ParsingMode");
#pragma pack(pop)
