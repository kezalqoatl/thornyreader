LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

SAVED_NDK_APP_DST_DIR := $(NDK_APP_DST_DIR)
NDK_APP_DST_DIR := assets/plugins

LOCAL_MODULE := mupdf

LOCAL_CFLAGS     := -DAA_BITS=8

LOCAL_C_INCLUDES := \
	$(LOCAL_PATH)/../freetype/overlay \
	$(LOCAL_PATH)/../freetype/include \
	$(LOCAL_PATH)/../jpeg-turbo/include \
	$(LOCAL_PATH)/../jbig2dec/include \
	$(LOCAL_PATH)/../openjpeg/include \
	$(LOCAL_PATH)/../standalone/include \
	$(LOCAL_PATH)/include \
	$(LOCAL_PATH)/generated \
	$(LOCAL_PATH)/standalone \

LOCAL_SRC_FILES := \
	standalone/MuPdfMain.cpp \
	standalone/MuPdfBridge.cpp \
	standalone/MuPdfLinks.cpp \
	standalone/MuPdfOutline.cpp \
	standalone/MuPdfText.cpp \
	standalone/MuPdfFonts.cpp
	
LOCAL_SRC_FILES += \
	pdf/js/pdf-js-none.c \
	pdf/pdf-annot.c \
	pdf/pdf-appearance.c \
	pdf/pdf-cmap.c \
	pdf/pdf-cmap-load.c \
	pdf/pdf-cmap-parse.c \
	pdf/pdf-cmap-table.c \
	pdf/pdf-colorspace.c \
	pdf/pdf-crypt.c \
	pdf/pdf-device.c \
	pdf/pdf-encoding.c \
	pdf/pdf-event.c \
	pdf/pdf-field.c \
	pdf/pdf-font.c \
	pdf/pdf-fontfile.c \
	pdf/pdf-form.c \
	pdf/pdf-function.c \
	pdf/pdf-image.c \
	pdf/pdf-interpret.c \
	pdf/pdf-lex.c \
	pdf/pdf-metrics.c \
	pdf/pdf-nametree.c \
	pdf/pdf-object.c \
	pdf/pdf-outline.c \
	pdf/pdf-page.c \
	pdf/pdf-parse.c \
	pdf/pdf-pattern.c \
	pdf/pdf-pkcs7.c \
	pdf/pdf-repair.c \
	pdf/pdf-shade.c \
	pdf/pdf-store.c \
	pdf/pdf-stream.c \
	pdf/pdf-type3.c \
	pdf/pdf-unicode.c \
	pdf/pdf-write.c \
	pdf/pdf-xobject.c \
	pdf/pdf-xref-aux.c \
	pdf/pdf-xref.c \

LOCAL_SRC_FILES += \
	xps/xps-common.c \
	xps/xps-doc.c \
	xps/xps-glyphs.c \
	xps/xps-gradient.c \
	xps/xps-image.c \
	xps/xps-outline.c \
	xps/xps-path.c \
	xps/xps-resource.c \
	xps/xps-tile.c \
	xps/xps-util.c \
	xps/xps-zip.c

LOCAL_SRC_FILES += \
	fitz/bbox-device.c \
	fitz/bitmap.c \
	fitz/buffer.c \
	fitz/colorspace.c \
	fitz/compressed-buffer.c \
	fitz/context.c \
	fitz/crypt-aes.c \
	fitz/crypt-arc4.c \
	fitz/crypt-md5.c \
	fitz/crypt-sha2.c \
	fitz/device.c \
	fitz/document.c \
	fitz/draw-affine.c \
	fitz/draw-blend.c \
	fitz/draw-device.c \
	fitz/draw-edge.c \
	fitz/draw-glyph.c \
	fitz/draw-mesh.c \
	fitz/draw-paint.c \
	fitz/draw-path.c \
	fitz/draw-scale-simple.c \
	fitz/draw-unpack.c \
	fitz/error.c \
	fitz/filter-basic.c \
	fitz/filter-dct.c \
	fitz/filter-fax.c \
	fitz/filter-flate.c \
	fitz/filter-jbig2.c \
	fitz/filter-lzw.c \
	fitz/filter-predict.c \
	fitz/font.c \
	fitz/function.c \
	fitz/geometry.c \
	fitz/getopt.c \
	fitz/halftone.c \
	fitz/hash.c \
	fitz/image.c \
	fitz/link.c \
	fitz/list-device.c \
	fitz/load-jpeg.c \
	fitz/load-jpx.c \
	fitz/load-png.c \
	fitz/load-tiff.c \
	fitz/memento.c \
	fitz/memory.c \
	fitz/outline.c \
	fitz/output.c \
	fitz/output-pcl.c \
	fitz/output-pwg.c \
	fitz/path.c \
	fitz/pixmap.c \
	fitz/shade.c \
	fitz/stext-device.c \
	fitz/stext-output.c \
	fitz/stext-paragraph.c \
	fitz/stext-search.c \
	fitz/store.c \
	fitz/stream-open.c \
	fitz/stream-prog.c \
	fitz/stream-read.c \
	fitz/string.c \
	fitz/svg-device.c \
	fitz/text.c \
	fitz/time.c \
	fitz/trace-device.c \
	fitz/transition.c \
	fitz/ucdn.c \
	fitz/xml.c
	
LOCAL_STATIC_LIBRARIES := standalone freetype jpeg-turbo jbig2dec openjpeg

# uses libz, which is officially supported for NDK API
LOCAL_LDLIBS := -lz -llog

LOCAL_ARM_MODE := $(APP_ARM_MODE)

include $(BUILD_EXECUTABLE)

NDK_APP_DST_DIR := $(SAVED_NDK_APP_DST_DIR)
