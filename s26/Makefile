CXX = g++
CXXFLAGS = -std=c++23 -Wall -O3
CLLFLAGS = -std=c++23 -Wall -O3 -fPIC -shared
LXXFLAGS = -std=c++23 -ltbb -lmath -L.
OBJECTS = main.o
LIBS = libmath.so
TARGET = main


$(TARGET): $(OBJECTS) $(LIBS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) $(LXXFLAGS) -o $(TARGET)

main.o: main.cpp math.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

libmath.so: math.cpp math.h
	$(CXX) $(CLLFLAGS) math.cpp -o libmath.so

clean:
	rm -f $(TARGET) $(OBJECTS) $(LIBS)
