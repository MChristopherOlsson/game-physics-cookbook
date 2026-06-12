CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17 -I.
TARGET := .build/game-physics-cookbook

SRC := $(shell find . -name "*.cpp" -not -path "./.build/*")
OBJ := $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ) | .build
		$(CXX) $(OBJ) -o $(TARGET)

.build:
		mkdir -p .build

%.o: %.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
		./$(TARGET)

clean:
		rm -f $(OBJ) $(TARGET)

.PHONY: all run clean
