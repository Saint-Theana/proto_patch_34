CXX := g++
# Compiler flags
CXXFLAGS := -Wall -Wno-narrowing -fPIC -std=c++20 -Iinclude -Isrc/proto

# Directories
SRCDIR := src
BUILDDIR := build
LIBDIR := lib

# Files to compile
SRC_FILES = $(shell find $(SRC_DIR) -name '*.cpp')
OBJ_FILES = $(SRC_FILES:.cpp=.o)

# Output shared library name
TARGET = lib/libhook.so



# Rule to build object files
$(TARGET): $(OBJ_FILES)
	$(CXX)  -shared -fPIC -o $(TARGET) $(OBJ_FILES)  -Llib -ldl -ljsoncpp -lZydis 

# Rule to build shared library
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean command
clean:
	rm -f $(OBJ_FILES) $(TARGET)

# Phony targets
.PHONY: all clean
