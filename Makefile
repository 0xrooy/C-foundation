# ===============================
# 💻 C Training Ground Makefile
# ===============================

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c11 -g

# Directory structure
SRC_DIR = src
BUILD_DIR = build
BIN_DIR = bin

# Automatically find all .c files recursively
SRC = $(shell find $(SRC_DIR) -name '*.c')
OBJ = $(SRC:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
BIN = $(OBJ:$(BUILD_DIR)/%.o=$(BIN_DIR)/%)

# Default target
all: $(BIN)

# Link object files to binaries
$(BIN_DIR)/%: $(BUILD_DIR)/%.o
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@
	@echo "✅ Built: $@"

# Compile each .c file into an object file
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "🔧 Compiled: $<"

# Run the first compiled binary
run: all
	@echo "🚀 Running $(firstword $(BIN))"
	@./$(firstword $(BIN))

# Run a specific program, e.g. make run-fundamentals/hello
run-%: all
	@echo "🚀 Running $(BIN_DIR)/$*"
	@./$(BIN_DIR)/$*

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)
	@echo "🧹 Cleaned build files"

# Help menu
help:
	@echo "Available commands:"
	@echo "  make          → Build all programs"
	@echo "  make run      → Run the first program"
	@echo "  make run-foo  → Run a specific program (e.g. make run-fundamentals/hello)"
	@echo "  make clean    → Remove build and bin directories"
