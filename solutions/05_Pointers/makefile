# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -fsanitize=address -g

# Directories
SRC_DIR = .
BUILD_DIR = build

# Source and output binaries
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
BINS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%, $(SRCS))

.PHONY: all clean

all: $(BINS)

$(BUILD_DIR)/%: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)
