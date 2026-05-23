CXX = g++
CXXFLAGS = -std=c++23 -Wall -c
LXXFLAGS = -std=c++23 -lm
OBJECTS = class_app.o  #box.o vector.o vector2d.o
TARGET = class_app


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)

class_app.o: class.cpp box.h vector.h temp_vector.h vector.hpp stack.h stack.hpp util.h #vector2d.h
	$(CXX) $(CXXFLAGS) class.cpp -o class_app.o

box.o: box.cpp
	$(CXX) $(CXXFLAGS) box.cpp -o box.o
# vector.o: vector.cpp
# 	$(CXX) $(CXXFLAGS) vector.cpp -o vector.o
# vector2d.o: vector2d.cpp
# 	$(CXX) $(CXXFLAGS) vector2d.cpp -o vector2d.o

clean:
	rm -f $(TARGET) $(OBJECTS)
