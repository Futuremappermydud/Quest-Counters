// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Diagnostics.Tracing.EventLevel
#include "System/Diagnostics/Tracing/EventLevel.hpp"
// Including type: System.Diagnostics.Tracing.EventKeywords
#include "System/Diagnostics/Tracing/EventKeywords.hpp"
// Including type: System.Diagnostics.Tracing.EventTask
#include "System/Diagnostics/Tracing/EventTask.hpp"
// Including type: System.Diagnostics.Tracing.EventTags
#include "System/Diagnostics/Tracing/EventTags.hpp"
// Including type: System.Diagnostics.Tracing.EventActivityOptions
#include "System/Diagnostics/Tracing/EventActivityOptions.hpp"
// Including type: System.Diagnostics.Tracing.EventOpcode
#include "System/Diagnostics/Tracing/EventOpcode.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventAttribute
  class EventAttribute : public System::Attribute {
    public:
    // private System.Int32 <EventId>k__BackingField
    // Offset: 0x10
    int EventId;
    // private System.Diagnostics.Tracing.EventLevel <Level>k__BackingField
    // Offset: 0x14
    System::Diagnostics::Tracing::EventLevel Level;
    // private System.Diagnostics.Tracing.EventKeywords <Keywords>k__BackingField
    // Offset: 0x18
    System::Diagnostics::Tracing::EventKeywords Keywords;
    // private System.Diagnostics.Tracing.EventTask <Task>k__BackingField
    // Offset: 0x20
    System::Diagnostics::Tracing::EventTask Task;
    // private System.Byte <Version>k__BackingField
    // Offset: 0x24
    uint8_t Version;
    // private System.String <Message>k__BackingField
    // Offset: 0x28
    ::Il2CppString* Message;
    // private System.Diagnostics.Tracing.EventTags <Tags>k__BackingField
    // Offset: 0x30
    System::Diagnostics::Tracing::EventTags Tags;
    // private System.Diagnostics.Tracing.EventActivityOptions <ActivityOptions>k__BackingField
    // Offset: 0x34
    System::Diagnostics::Tracing::EventActivityOptions ActivityOptions;
    // private System.Diagnostics.Tracing.EventOpcode m_opcode
    // Offset: 0x38
    System::Diagnostics::Tracing::EventOpcode m_opcode;
    // private System.Boolean m_opcodeSet
    // Offset: 0x3C
    bool m_opcodeSet;
    // public System.Void .ctor(System.Int32 eventId)
    // Offset: 0xC9B20C
    static EventAttribute* New_ctor(int eventId);
    // public System.Int32 get_EventId()
    // Offset: 0xC9B240
    int get_EventId();
    // private System.Void set_EventId(System.Int32 value)
    // Offset: 0xC9B248
    void set_EventId(int value);
    // public System.Diagnostics.Tracing.EventLevel get_Level()
    // Offset: 0xC9B250
    System::Diagnostics::Tracing::EventLevel get_Level();
    // public System.Void set_Level(System.Diagnostics.Tracing.EventLevel value)
    // Offset: 0xC9B258
    void set_Level(System::Diagnostics::Tracing::EventLevel value);
    // public System.Diagnostics.Tracing.EventKeywords get_Keywords()
    // Offset: 0xC9B260
    System::Diagnostics::Tracing::EventKeywords get_Keywords();
    // public System.Diagnostics.Tracing.EventOpcode get_Opcode()
    // Offset: 0xC9B268
    System::Diagnostics::Tracing::EventOpcode get_Opcode();
    // public System.Void set_Opcode(System.Diagnostics.Tracing.EventOpcode value)
    // Offset: 0xC9B270
    void set_Opcode(System::Diagnostics::Tracing::EventOpcode value);
    // System.Boolean get_IsOpcodeSet()
    // Offset: 0xC9B280
    bool get_IsOpcodeSet();
    // public System.Diagnostics.Tracing.EventTask get_Task()
    // Offset: 0xC9B288
    System::Diagnostics::Tracing::EventTask get_Task();
    // public System.Void set_Task(System.Diagnostics.Tracing.EventTask value)
    // Offset: 0xC9B290
    void set_Task(System::Diagnostics::Tracing::EventTask value);
    // public System.Byte get_Version()
    // Offset: 0xC9B298
    uint8_t get_Version();
    // public System.String get_Message()
    // Offset: 0xC9B2A0
    ::Il2CppString* get_Message();
    // public System.Void set_Message(System.String value)
    // Offset: 0xC9B2A8
    void set_Message(::Il2CppString* value);
    // public System.Diagnostics.Tracing.EventTags get_Tags()
    // Offset: 0xC9B2B0
    System::Diagnostics::Tracing::EventTags get_Tags();
    // public System.Diagnostics.Tracing.EventActivityOptions get_ActivityOptions()
    // Offset: 0xC9B2B8
    System::Diagnostics::Tracing::EventActivityOptions get_ActivityOptions();
    // public System.Void set_ActivityOptions(System.Diagnostics.Tracing.EventActivityOptions value)
    // Offset: 0xC9B2C0
    void set_ActivityOptions(System::Diagnostics::Tracing::EventActivityOptions value);
  }; // System.Diagnostics.Tracing.EventAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventAttribute*, "System.Diagnostics.Tracing", "EventAttribute");
#pragma pack(pop)
