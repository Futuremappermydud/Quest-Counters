// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventDescriptor
#include "System/Diagnostics/Tracing/EventDescriptor.hpp"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Diagnostics.Tracing.EventTags
#include "System/Diagnostics/Tracing/EventTags.hpp"
// Including type: System.Diagnostics.Tracing.EventActivityOptions
#include "System/Diagnostics/Tracing/EventActivityOptions.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingEventTypes
  class TraceLoggingEventTypes;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventSource/EventMetadata
  struct EventSource::EventMetadata : public System::ValueType {
    public:
    // public System.Diagnostics.Tracing.EventDescriptor Descriptor
    // Offset: 0x0
    System::Diagnostics::Tracing::EventDescriptor Descriptor;
    // public System.Diagnostics.Tracing.EventTags Tags
    // Offset: 0x10
    System::Diagnostics::Tracing::EventTags Tags;
    // public System.Boolean EnabledForAnyListener
    // Offset: 0x14
    bool EnabledForAnyListener;
    // public System.Boolean EnabledForETW
    // Offset: 0x15
    bool EnabledForETW;
    // public System.Boolean HasRelatedActivityID
    // Offset: 0x16
    bool HasRelatedActivityID;
    // public System.Byte TriggersActivityTracking
    // Offset: 0x17
    uint8_t TriggersActivityTracking;
    // public System.String Name
    // Offset: 0x18
    ::Il2CppString* Name;
    // public System.String Message
    // Offset: 0x20
    ::Il2CppString* Message;
    // public System.Reflection.ParameterInfo[] Parameters
    // Offset: 0x28
    ::Array<System::Reflection::ParameterInfo*>* Parameters;
    // public System.Diagnostics.Tracing.TraceLoggingEventTypes TraceLoggingEventTypes
    // Offset: 0x30
    System::Diagnostics::Tracing::TraceLoggingEventTypes* TraceLoggingEventTypes;
    // public System.Diagnostics.Tracing.EventActivityOptions ActivityOptions
    // Offset: 0x38
    System::Diagnostics::Tracing::EventActivityOptions ActivityOptions;
    // Creating value type constructor for type: EventMetadata
    constexpr EventMetadata(System::Diagnostics::Tracing::EventDescriptor Descriptor_ = {}, System::Diagnostics::Tracing::EventTags Tags_ = {}, bool EnabledForAnyListener_ = {}, bool EnabledForETW_ = {}, bool HasRelatedActivityID_ = {}, uint8_t TriggersActivityTracking_ = {}, ::Il2CppString* Name_ = {}, ::Il2CppString* Message_ = {}, ::Array<System::Reflection::ParameterInfo*>* Parameters_ = {}, System::Diagnostics::Tracing::TraceLoggingEventTypes* TraceLoggingEventTypes_ = {}, System::Diagnostics::Tracing::EventActivityOptions ActivityOptions_ = {}) noexcept : Descriptor{Descriptor_}, Tags{Tags_}, EnabledForAnyListener{EnabledForAnyListener_}, EnabledForETW{EnabledForETW_}, HasRelatedActivityID{HasRelatedActivityID_}, TriggersActivityTracking{TriggersActivityTracking_}, Name{Name_}, Message{Message_}, Parameters{Parameters_}, TraceLoggingEventTypes{TraceLoggingEventTypes_}, ActivityOptions{ActivityOptions_} {}
  }; // System.Diagnostics.Tracing.EventSource/EventMetadata
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventSource::EventMetadata, "System.Diagnostics.Tracing", "EventSource/EventMetadata");
#pragma pack(pop)