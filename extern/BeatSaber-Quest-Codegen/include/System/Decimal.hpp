// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Decimal
  struct Decimal : public System::ValueType, public System::IFormattable, public System::IComparable, public System::IConvertible, public System::Runtime::Serialization::IDeserializationCallback, public System::IComparable_1<System::Decimal>, public System::IEquatable_1<System::Decimal> {
    public:
    // private System.Int32 flags
    // Offset: 0x0
    int flags;
    // private System.Int32 hi
    // Offset: 0x4
    int hi;
    // private System.Int32 lo
    // Offset: 0x8
    int lo;
    // private System.Int32 mid
    // Offset: 0xC
    int mid;
    // Creating value type constructor for type: Decimal
    constexpr Decimal(int flags_ = {}, int hi_ = {}, int lo_ = {}, int mid_ = {}) noexcept : flags{flags_}, hi{hi_}, lo{lo_}, mid{mid_} {}
    // static field const value: static private System.Int32 SignMask
    static constexpr const int SignMask = -2147483648;
    // Get static field: static private System.Int32 SignMask
    static int _get_SignMask();
    // Set static field: static private System.Int32 SignMask
    static void _set_SignMask(int value);
    // static field const value: static private System.Byte DECIMAL_NEG
    static constexpr const uint8_t DECIMAL_NEG = 128u;
    // Get static field: static private System.Byte DECIMAL_NEG
    static uint8_t _get_DECIMAL_NEG();
    // Set static field: static private System.Byte DECIMAL_NEG
    static void _set_DECIMAL_NEG(uint8_t value);
    // static field const value: static private System.Byte DECIMAL_ADD
    static constexpr const uint8_t DECIMAL_ADD = 0u;
    // Get static field: static private System.Byte DECIMAL_ADD
    static uint8_t _get_DECIMAL_ADD();
    // Set static field: static private System.Byte DECIMAL_ADD
    static void _set_DECIMAL_ADD(uint8_t value);
    // static field const value: static private System.Int32 ScaleMask
    static constexpr const int ScaleMask = 16711680;
    // Get static field: static private System.Int32 ScaleMask
    static int _get_ScaleMask();
    // Set static field: static private System.Int32 ScaleMask
    static void _set_ScaleMask(int value);
    // static field const value: static private System.Int32 ScaleShift
    static constexpr const int ScaleShift = 16;
    // Get static field: static private System.Int32 ScaleShift
    static int _get_ScaleShift();
    // Set static field: static private System.Int32 ScaleShift
    static void _set_ScaleShift(int value);
    // static field const value: static private System.Int32 MaxInt32Scale
    static constexpr const int MaxInt32Scale = 9;
    // Get static field: static private System.Int32 MaxInt32Scale
    static int _get_MaxInt32Scale();
    // Set static field: static private System.Int32 MaxInt32Scale
    static void _set_MaxInt32Scale(int value);
    // Get static field: static private System.UInt32[] Powers10
    static ::Array<uint>* _get_Powers10();
    // Set static field: static private System.UInt32[] Powers10
    static void _set_Powers10(::Array<uint>* value);
    // Get static field: static public readonly System.Decimal Zero
    static System::Decimal _get_Zero();
    // Set static field: static public readonly System.Decimal Zero
    static void _set_Zero(System::Decimal value);
    // Get static field: static public readonly System.Decimal One
    static System::Decimal _get_One();
    // Set static field: static public readonly System.Decimal One
    static void _set_One(System::Decimal value);
    // Get static field: static public readonly System.Decimal MinusOne
    static System::Decimal _get_MinusOne();
    // Set static field: static public readonly System.Decimal MinusOne
    static void _set_MinusOne(System::Decimal value);
    // Get static field: static public readonly System.Decimal MaxValue
    static System::Decimal _get_MaxValue();
    // Set static field: static public readonly System.Decimal MaxValue
    static void _set_MaxValue(System::Decimal value);
    // Get static field: static public readonly System.Decimal MinValue
    static System::Decimal _get_MinValue();
    // Set static field: static public readonly System.Decimal MinValue
    static void _set_MinValue(System::Decimal value);
    // Get static field: static private readonly System.Decimal NearNegativeZero
    static System::Decimal _get_NearNegativeZero();
    // Set static field: static private readonly System.Decimal NearNegativeZero
    static void _set_NearNegativeZero(System::Decimal value);
    // Get static field: static private readonly System.Decimal NearPositiveZero
    static System::Decimal _get_NearPositiveZero();
    // Set static field: static private readonly System.Decimal NearPositiveZero
    static void _set_NearPositiveZero(System::Decimal value);
    // public System.Void .ctor(System.Int32 value)
    // Offset: 0xA2CF20
    static Decimal* New_ctor(int value);
    // public System.Void .ctor(System.UInt32 value)
    // Offset: 0xA2CF44
    static Decimal* New_ctor(uint value);
    // public System.Void .ctor(System.Int64 value)
    // Offset: 0xA2CF50
    static Decimal* New_ctor(int64_t value);
    // public System.Void .ctor(System.UInt64 value)
    // Offset: 0xA2CF78
    static Decimal* New_ctor(uint64_t value);
    // public System.Void .ctor(System.Single value)
    // Offset: 0xA2CF88
    static Decimal* New_ctor(float value);
    // public System.Void .ctor(System.Double value)
    // Offset: 0xA2CF90
    static Decimal* New_ctor(double value);
    // public System.Void .ctor(System.Int32[] bits)
    // Offset: 0xA2CF98
    static Decimal* New_ctor(::Array<int>* bits);
    // private System.Void SetBits(System.Int32[] bits)
    // Offset: 0xA2CFA0
    void SetBits(::Array<int>* bits);
    // public System.Void .ctor(System.Int32 lo, System.Int32 mid, System.Int32 hi, System.Boolean isNegative, System.Byte scale)
    // Offset: 0xA2CFA8
    static Decimal* New_ctor(int lo, int mid, int hi, bool isNegative, uint8_t scale);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0xA2CFB4
    void OnSerializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void .ctor(System.Int32 lo, System.Int32 mid, System.Int32 hi, System.Int32 flags)
    // Offset: 0xA2CFC4
    static Decimal* New_ctor(int lo, int mid, int hi, int flags);
    // static System.Decimal Abs(System.Decimal d)
    // Offset: 0xC8BDFC
    static System::Decimal Abs(System::Decimal d);
    // static private System.Void FCallAddSub(ref System.Decimal d1, ref System.Decimal d2, System.Byte bSign)
    // Offset: 0xC8BE30
    static void FCallAddSub(System::Decimal& d1, System::Decimal& d2, uint8_t bSign);
    // static private System.Int32 FCallCompare(ref System.Decimal d1, ref System.Decimal d2)
    // Offset: 0xC8BE34
    static int FCallCompare(System::Decimal& d1, System::Decimal& d2);
    // static public System.Decimal Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0xC8C1A8
    static System::Decimal Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // static public System.Decimal Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0xC8C1E0
    static System::Decimal Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider);
    // static public System.Int32[] GetBits(System.Decimal d)
    // Offset: 0xC8BB38
    static ::Array<int>* GetBits(System::Decimal d);
    // static System.Decimal ToDecimal(System.Byte[] buffer)
    // Offset: 0xC8C234
    static System::Decimal ToDecimal(::Array<uint8_t>* buffer);
    // static public System.Decimal Round(System.Decimal d, System.Int32 decimals)
    // Offset: 0xC8C360
    static System::Decimal Round(System::Decimal d, int decimals);
    // static private System.Void FCallRound(ref System.Decimal d, System.Int32 decimals)
    // Offset: 0xC8C3DC
    static void FCallRound(System::Decimal& d, int decimals);
    // static public System.Byte ToByte(System.Decimal value)
    // Offset: 0xC8C3E0
    static uint8_t ToByte(System::Decimal value);
    // static public System.SByte ToSByte(System.Decimal value)
    // Offset: 0xC8C664
    static int8_t ToSByte(System::Decimal value);
    // static public System.Int16 ToInt16(System.Decimal value)
    // Offset: 0xC8C8F8
    static int16_t ToInt16(System::Decimal value);
    // static public System.Double ToDouble(System.Decimal d)
    // Offset: 0xC8CA88
    static double ToDouble(System::Decimal d);
    // static System.Int32 FCallToInt32(System.Decimal d)
    // Offset: 0xC8CA8C
    static int FCallToInt32(System::Decimal d);
    // static public System.Int32 ToInt32(System.Decimal d)
    // Offset: 0xC8C7F4
    static int ToInt32(System::Decimal d);
    // static public System.Int64 ToInt64(System.Decimal d)
    // Offset: 0xC8CA94
    static int64_t ToInt64(System::Decimal d);
    // static public System.UInt16 ToUInt16(System.Decimal value)
    // Offset: 0xC8CB90
    static uint16_t ToUInt16(System::Decimal value);
    // static public System.UInt32 ToUInt32(System.Decimal d)
    // Offset: 0xC8C56C
    static uint ToUInt32(System::Decimal d);
    // static public System.UInt64 ToUInt64(System.Decimal d)
    // Offset: 0xC8CD1C
    static uint64_t ToUInt64(System::Decimal d);
    // static public System.Single ToSingle(System.Decimal d)
    // Offset: 0xC8CE0C
    static float ToSingle(System::Decimal d);
    // static private System.Void FCallTruncate(ref System.Decimal d)
    // Offset: 0xC8CA90
    static void FCallTruncate(System::Decimal& d);
    // static private System.Void .cctor()
    // Offset: 0xC8D9C0
    static void _cctor();
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0xA2CFBC
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xA2CFCC
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object value)
    int CompareTo(::Il2CppObject* value);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Decimal value)
    // Offset: 0xA2CFD4
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable`1::CompareTo(System.Decimal value)
    int CompareTo(System::Decimal value);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0xA2CFDC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public System.Boolean Equals(System.Decimal value)
    // Offset: 0xA2CFE4
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.Decimal value)
    bool Equals(System::Decimal value);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA2CFEC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xA2CFF4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xA2D02C
    // Implemented from: System.IConvertible
    // Base method: System.String IConvertible::ToString(System.IFormatProvider provider)
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xA2D068
    // Implemented from: System.IFormattable
    // Base method: System.String IFormattable::ToString(System.String format, System.IFormatProvider provider)
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xA2D0B0
    // Implemented from: System.IConvertible
    // Base method: System.TypeCode IConvertible::GetTypeCode()
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xA2D0B8
    // Implemented from: System.IConvertible
    // Base method: System.Boolean IConvertible::ToBoolean(System.IFormatProvider provider)
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xA2D0C0
    // Implemented from: System.IConvertible
    // Base method: System.Char IConvertible::ToChar(System.IFormatProvider provider)
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xA2D0CC
    // Implemented from: System.IConvertible
    // Base method: System.SByte IConvertible::ToSByte(System.IFormatProvider provider)
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xA2D0D4
    // Implemented from: System.IConvertible
    // Base method: System.Byte IConvertible::ToByte(System.IFormatProvider provider)
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xA2D0DC
    // Implemented from: System.IConvertible
    // Base method: System.Int16 IConvertible::ToInt16(System.IFormatProvider provider)
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xA2D0E4
    // Implemented from: System.IConvertible
    // Base method: System.UInt16 IConvertible::ToUInt16(System.IFormatProvider provider)
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xA2D0EC
    // Implemented from: System.IConvertible
    // Base method: System.Int32 IConvertible::ToInt32(System.IFormatProvider provider)
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xA2D0F4
    // Implemented from: System.IConvertible
    // Base method: System.UInt32 IConvertible::ToUInt32(System.IFormatProvider provider)
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xA2D0FC
    // Implemented from: System.IConvertible
    // Base method: System.Int64 IConvertible::ToInt64(System.IFormatProvider provider)
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xA2D104
    // Implemented from: System.IConvertible
    // Base method: System.UInt64 IConvertible::ToUInt64(System.IFormatProvider provider)
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xA2D10C
    // Implemented from: System.IConvertible
    // Base method: System.Single IConvertible::ToSingle(System.IFormatProvider provider)
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xA2D114
    // Implemented from: System.IConvertible
    // Base method: System.Double IConvertible::ToDouble(System.IFormatProvider provider)
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xA2D11C
    // Implemented from: System.IConvertible
    // Base method: System.Decimal IConvertible::ToDecimal(System.IFormatProvider provider)
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xA2D128
    // Implemented from: System.IConvertible
    // Base method: System.DateTime IConvertible::ToDateTime(System.IFormatProvider provider)
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xA2D134
    // Implemented from: System.IConvertible
    // Base method: System.Object IConvertible::ToType(System.Type type, System.IFormatProvider provider)
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
  }; // System.Decimal
  // static public System.Decimal op_Subtraction(System.Decimal d1, System.Decimal d2)
  // Offset: 0xC8CFCC
  System::Decimal operator-(const System::Decimal& d1, const System::Decimal& d2);
  // static public System.Boolean op_Equality(System.Decimal d1, System.Decimal d2)
  // Offset: 0xC8D04C
  bool operator ==(const System::Decimal& d1, const System::Decimal& d2);
  // static public System.Boolean op_Inequality(System.Decimal d1, System.Decimal d2)
  // Offset: 0xC8D0CC
  bool operator !=(const System::Decimal& d1, const System::Decimal& d2);
  // static public System.Boolean op_LessThanOrEqual(System.Decimal d1, System.Decimal d2)
  // Offset: 0xC8D14C
  bool operator <=(const System::Decimal& d1, const System::Decimal& d2);
  // static public System.Boolean op_GreaterThan(System.Decimal d1, System.Decimal d2)
  // Offset: 0xC8D1CC
  bool operator >(const System::Decimal& d1, const System::Decimal& d2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Decimal, "System", "Decimal");
#pragma pack(pop)