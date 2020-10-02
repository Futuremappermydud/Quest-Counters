LOCAL_PATH := $(call my-dir)

TARGET_ARCH_ABI := arm64-v8a

include $(CLEAR_VARS)
LOCAL_MODULE := hook

rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))

# Build the modloader shared library
include $(CLEAR_VARS)
LOCAL_MODULE	        := modloader
LOCAL_SRC_FILES         := ./extern/libmodloader.so
LOCAL_EXPORT_C_INCLUDES := ./extern/modloader/include/
include $(PREBUILT_SHARED_LIBRARY)

# Build the beatsaber-hook shared library, SPECIFICALLY VERSIONED!
include $(CLEAR_VARS)
LOCAL_MODULE	        := beatsaber-hook_0_7_1
LOCAL_SRC_FILES         := ./extern/libbeatsaber-hook_0_7_1.so
LOCAL_EXPORT_C_INCLUDES := ./extern/beatsaber-hook/shared/
include $(PREBUILT_SHARED_LIBRARY)

# Build the CustomUI shared library
include $(CLEAR_VARS)
LOCAL_MODULE	        := CustomUI_0_1_2
LOCAL_SRC_FILES         := ./extern/libcustom-ui_0_1_2.so
LOCAL_EXPORT_C_INCLUDES := ./extern/BeatSaberQuestCustomUI/shared
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := codegen_0_2_6
LOCAL_EXPORT_C_INCLUDES := ./extern/codegen/include
LOCAL_SRC_FILES := ./extern/libcodegen_0_2_6.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := PPUtils_0_1_0
LOCAL_EXPORT_C_INCLUDES := ./extern/PP-Utils/include
LOCAL_SRC_FILES := ./extern/libPPUtils_0_1_0.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
# Include the two libraries
LOCAL_SHARED_LIBRARIES := modloader
LOCAL_SHARED_LIBRARIES += beatsaber-hook_0_7_1
LOCAL_SHARED_LIBRARIES += CustomUI_0_1_2
LOCAL_SHARED_LIBRARIES += codegen_0_2_6
LOCAL_SHARED_LIBRARIES += PPUtils_0_1_0
LOCAL_LDLIBS     := -llog
LOCAL_CFLAGS     := -I'c:/Program Files/Unity/Hub/Editor/2019.3.1f1/Editor/Data/il2cpp/libil2cpp' -I'./shared' -I'./extern' -I'./extern/codegen/include' -I'./extern/beatsaber-hook' -I'./extern/modloader'
LOCAL_MODULE     := questcounters
LOCAL_CPPFLAGS   := -std=c++2a
LOCAL_C_INCLUDES := ./include ./src
LOCAL_SRC_FILES  += $(call rwildcard,src/,*.cpp) ./extern/beatsaber-hook/src/inline-hook/And64InlineHook.cpp
include $(BUILD_SHARED_LIBRARY)