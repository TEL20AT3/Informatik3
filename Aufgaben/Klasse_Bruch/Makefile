CC := g++
CFLAGS := -Wall -g -std=c++17
TARGET := main.out
SRC_DIR := ./
OBJ_DIR := $(SRC_DIR)

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
# $(patsubst %.cpp,%.o,$(SRCS)): substitute all ".cpp" file name strings to ".o" file name strings
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

run: $(TARGET)
	./$(TARGET)

.PHONY: clean

clean:
	rm -rf $(TARGET) $(OBJ_DIR)/*.o