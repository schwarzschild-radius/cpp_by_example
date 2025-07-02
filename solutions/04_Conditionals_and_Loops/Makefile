CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

SOL_DIR = .
BUILD_DIR = build

SOL_SRCS = $(wildcard $(SOL_DIR)/*.cpp)
SOL_BINS = $(patsubst $(SOL_DIR)/%.cpp,$(BUILD_DIR)/%,$(SOL_SRCS))

.PHONY: all clean

all: $(SOL_BINS)

$(BUILD_DIR)/%: $(SOL_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)
