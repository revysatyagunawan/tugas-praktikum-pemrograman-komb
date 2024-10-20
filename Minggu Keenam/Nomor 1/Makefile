# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = nomor_1
SRC = nomor_1.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the nomor_1.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program in test mode (using hardcode)
test: $(TARGET)
	./$(TARGET) test

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test