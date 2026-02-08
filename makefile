# Define variables
# The compiler to use
CXX := g++
# Compiler flags
CXXFLAGS := -Wall -Wextra -std=c++23 -Iinclude
# The build directory
BUILD_DIR := build
# Source files (find all .cpp files in the current directory, excluding main.cpp if needed)
SRCS := $(wildcard *.cpp)
# Object files (replace .cpp with .o and put them in the build directory)
OBJS := $(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRCS))
# The final executable name
TARGET := ./NFLSIM

.PHONY: all clean compile_one

# Default target
all: $(BUILD_DIR) $(TARGET)

# Rule to create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Rule to link the object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@

# Rule to compile a single .cpp file into an object file
# The $(BUILD_DIR)/%.o target depends on the corresponding %.cpp source file
$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Target to compile one specific file (e.g., test.cpp)
# Usage: make compile_one FILE=test.cpp
compile_one: $(BUILD_DIR)
	@if [ -z "$(FILE)" ]; then \
		echo "Error: Specify the file to compile using 'make compile_one FILE=filename.cpp'"; \
	else \
		echo "Compiling $(FILE)..."; \
		$(CXX) $(CXXFLAGS) -c $(FILE) -o $(BUILD_DIR)/$(notdir $(FILE:.cpp=.o)); \
	fi

# Clean up build artifacts
clean:
	rm "-rf" $(BUILD_DIR) $(TARGET)
