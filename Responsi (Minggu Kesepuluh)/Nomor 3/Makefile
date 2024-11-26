CXX = g++
CXXFLAGS = -Wall
TARGET = nomor_3
SRC = nomor_3.cpp

all: $(TARGET)

$(TARGET): $(SRC)
		$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TARGET)
		./$(TARGET)

clean: 
		rm -f $(TARGET)

.PHONY: all clean test