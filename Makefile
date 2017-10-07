# TARGET #

TARGET := ALL
LIBRARY := 0

ifeq ($(TARGET),$(filter $(TARGET),3DS WIIU))
    ifeq ($(strip $(DEVKITPRO)),)
        $(error "Please set DEVKITPRO in your environment. export DEVKITPRO=<path to>devkitPro")
    endif
endif

# COMMON CONFIGURATION #

NAME := fefoSheep

BUILD_DIR := build
OUTPUT_DIR := output
INCLUDE_DIRS := include
SOURCE_DIRS := source

EXTRA_OUTPUT_FILES :=

LIBRARY_DIRS :=
LIBRARIES :=

BUILD_FLAGS :=
BUILD_FLAGS_CC :=
BUILD_FLAGS_CXX :=
RUN_FLAGS :=

VERSION_MAJOR := 1
VERSION_MINOR := 5
VERSION_MICRO := 0

# 3DS/Wii U CONFIGURATION #

ifeq ($(TARGET),$(filter $(TARGET),3DS WIIU))
    TITLE := fefoSheep
    DESCRIPTION := bes way 2 git fri gam
    AUTHOR := kekmaster97
endif

# 3DS CONFIGURATION #

ifeq ($(TARGET),3DS)
    LIBRARY_DIRS += $(DEVKITPRO)/libctru
    LIBRARIES += ctru

    PRODUCT_CODE := CTR-P-FEFO
    UNIQUE_ID := 0xFEF00

    CATEGORY := Application
    USE_ON_SD := true

    MEMORY_TYPE := Application
    SYSTEM_MODE := 64MB
    SYSTEM_MODE_EXT := Legacy
    CPU_SPEED := 268MHz
    ENABLE_L2_CACHE := true

    ICON_FLAGS :=

    ROMFS_DIR :=
    BANNER_AUDIO := meta/audio_3ds.wav
    BANNER_IMAGE := meta/banner_3ds.png
    ICON := meta/icon_3ds.png
    LOGO :=
endif

# Wii U CONFIGURATION #

ifeq ($(TARGET),WIIU)
    LIBRARY_DIRS +=
    LIBRARIES +=

    LONG_DESCRIPTION := Build template.
    ICON := meta/icon_wiiu.png
endif

# INTERNAL #

include buildtools/make_base
