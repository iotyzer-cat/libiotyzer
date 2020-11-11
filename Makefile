CROSS_COMPILE =
CC = $(CROSS_COMPILE)gcc
STRIP = $(CROSS_COMPILE)strip

SRC_DIR = ./src
INC_DIR = ./inc
LIB_DIR = ./lib
BIN_DIR = ./bin
OBJ_DIR = $(BIN_DIR)

CFLAGS = -O2 -W -Wall -Werror -fPIC -Wno-unused-variable -Wno-unused-parameter -Wno-discarded-qualifiers -D_IOTYZER_LIB_
LDFLAGS = -O2 -shared -Wl,-soname,$(TARGET)
CINCLUDE = -I$(INC_DIR)
CLIBRARY = -L$(LIB_DIR) 

TARGET := libIoTyzer.so

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo Building $@
	$(CC) $(CFLAGS) -o $@ -c $< $(CINCLUDE)

.PHONY : clean


all : clean build


build : $(OBJS)
	@echo Building $(TARGET)
	$(CC) $(LDFLAGS) -o $(BIN_DIR)/$(TARGET) $^ $(CLIBRARY)
	$(STRIP) $(BIN_DIR)/$(TARGET)

install :


uninstall :


clean :
	$(RM) $(OBJS) $(BIN_DIR)/$(TARGET)

