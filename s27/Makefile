CXX = g++
CXXFLAGS = -std=c++23 -Wall -ltbb -c #first try without -O3
# CXXFLAGS = -std=c++23 -Wall -O3 -ltbb -c
LXXFLAGS = -std=c++23 -lm
OBJECTS = main.o 
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp

clean:
	rm -f $(TARGET) $(OBJECTS)