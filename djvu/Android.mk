LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

SAVED_NDK_APP_DST_DIR := $(NDK_APP_DST_DIR)
NDK_APP_DST_DIR := assets/thornyreader/$(TARGET_ARCH_ABI)
LOCAL_MODULE := djvu
LOCAL_ARM_MODE := $(APP_ARM_MODE)

LOCAL_CPP_FEATURES  += exceptions

LOCAL_STATIC_LIBRARIES += standalone jpeg-turbo abitmap-utils
LOCAL_LDLIBS += -llog -latomic

LOCAL_LDFLAGS 		+= -rdynamic -pie # runpie
LOCAL_CFLAGS        += -fvisibility=default -fPIE # runpie

LOCAL_CFLAGS 		+= -DHAVE_CONFIG_H

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/../ \
	$(LOCAL_PATH)/../standalone/include \
	$(LOCAL_PATH)/../jpeg-turbo/jpeg-turbo/include \
	$(LOCAL_PATH)/../abitmap-utils/include \
	$(LOCAL_PATH)/include

LOCAL_SRC_FILES :=  \
	DjvuMain.cpp \
	DjvuBridge.cpp \
	DjvuOutline.cpp \
	DjvuLinks.cpp \
	DjvuText.cpp \
	src/Arrays.cpp \
	src/BSByteStream.cpp \
	src/BSEncodeByteStream.cpp \
	src/ByteStream.cpp \
	src/DataPool.cpp \
	src/DjVmDir.cpp \
	src/DjVmDir0.cpp \
	src/DjVmDoc.cpp \
	src/DjVmNav.cpp \
	src/DjVuAnno.cpp \
	src/DjVuDocument.cpp \
	src/DjVuDumpHelper.cpp \
	src/DjVuErrorList.cpp \
	src/DjVuFile.cpp \
	src/DjVuFileCache.cpp \
	src/DjVuGlobal.cpp \
	src/DjVuGlobalMemory.cpp \
	src/DjVuImage.cpp \
	src/DjVuInfo.cpp \
	src/DjVuMessage.cpp \
	src/DjVuMessageLite.cpp \
	src/DjVuNavDir.cpp \
	src/DjVuPalette.cpp \
	src/DjVuPort.cpp \
	src/DjVuText.cpp \
	src/GBitmap.cpp \
	src/GContainer.cpp \
	src/GException.cpp \
	src/GIFFManager.cpp \
	src/GMapAreas.cpp \
	src/GOS.cpp \
	src/GPixmap.cpp \
	src/GRect.cpp \
	src/GScaler.cpp \
	src/GSmartPointer.cpp \
	src/GString.cpp \
	src/GThreads.cpp \
	src/GURL.cpp \
	src/GUnicode.cpp \
	src/IFFByteStream.cpp \
	src/IW44Image.cpp \
	src/IW44EncodeCodec.cpp \
	src/JB2Image.cpp \
	src/JPEGDecoder.cpp \
	src/MMRDecoder.cpp \
	src/MMX.cpp \
	src/UnicodeByteStream.cpp \
	src/XMLParser.cpp \
	src/XMLTags.cpp \
	src/ZPCodec.cpp \
	src/atomic.cpp \
	src/debug.cpp \
	src/ddjvuapi.cpp \
	src/miniexp.cpp

include $(BUILD_EXECUTABLE)

NDK_APP_DST_DIR := $(SAVED_NDK_APP_DST_DIR)
