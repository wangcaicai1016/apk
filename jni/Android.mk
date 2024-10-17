LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := 输出物品
LOCAL_CPPFLAGS := -w -std=c++14

LOCAL_C_INCLUDES +=$(LOCAL_PATH)/include
LOCAL_C_INCLUDES +=$(LOCAL_PATH)/include/Android_read
LOCAL_C_INCLUDES += $(LOCAL_C_INCLUDES:$(LOCAL_PATH)/%:=%)

FILE_LIST += $(wildcard $(LOCAL_PATH)/src/*.c*)
LOCAL_SRC_FILES += $(FILE_LIST:$(LOCAL_PATH)/%=%)

LOCAL_LDFLAGS += -lEGL -lGLESv2 -lGLESv3 -landroid -llog
include $(BUILD_EXECUTABLE)