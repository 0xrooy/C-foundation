# Loops/Makefile
# Automatically compiles all .c files in src/ into build/ and bin/

# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Directory structure
SRC_DIR = src
BUILD_DIR = build
BIN_DIR = bin

# Files
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC))
EXE = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%, $(SRC))

# Default target: build all executables
all: $(EXE)

# Link object file -> executable (ensure bin exists)
$(BIN_DIR)/%: $(BUILD_DIR)/%.o | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@

# Compile source -> object file (ensure build exists)
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Automatically create bin/ and build/ directories
$(BIN_DIR) $(BUILD_DIR):
	mkdir -p $@

# Clean compiled files
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# Optional: run the first compiled program
run: all
	@echo "Running $(firstword $(EXE))..."
	@$(firstword $(EXE))
