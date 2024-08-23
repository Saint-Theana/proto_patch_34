CURRENT_DIR := $(shell pwd)
SRC_DIR = $(CURRENT_DIR)/src
BUILD_DIR = $(CURRENT_DIR)/build
CXX := g++
# Compiler flags
CXXFLAGS := -w -Wall -Wno-narrowing -fPIC -std=c++11 -Iinclude -Isrc/proto


# Files to compile

OBJS = $(patsubst $(SRC_DIR)%.cpp,$(BUILD_DIR)%.o,$(shell find $(CURRENT_DIR)/src/ -name "*.cpp"))


# Output shared library name
TARGET = $(BUILD_DIR)/lib/libhook.so

all: $(TARGET)
	@echo "all done"

$(OBJS): $(BUILD_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@


# Rule to build object files
$(TARGET): $(OBJS)
	@mkdir -p $(dir $@)
	$(CXX)  -shared -fPIC -o $(TARGET) $(OBJS)  -Llib -ldl -lZydis 


# Clean command
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean
