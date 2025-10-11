# Fundamentals/Makefile

CC = gcc
SRC_DIR = src
BUILD_DIR = build
BIN_DIR = bin

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC))
EXE = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%, $(SRC))

CFLAGS = -Wall -Wextra -std=c11

all: $(EXE)

$(BIN_DIR)/%: $(BUILD_DIR)/%.o | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR) $(BUILD_DIR):
	mkdir -p $@

clean:
	rm -rf $(BUILD_DIR)/*.o $(BIN_DIR)/*
