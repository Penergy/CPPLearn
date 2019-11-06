# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g
objects = *.o

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o Shape.o Circle.o Rectangle.o Square.o
	$(CXX) $(CXXFLAGS) -o main main.o Shape.o Circle.o Rectangle.o Square.o

# The main.o target can be written more simply

main.o: main.cpp Shape.h Circle.h Rectangle.h Square.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Shape.o: Shape.h

Circle.o: Circle.h Shape.h

Rectangle.o: Rectangle.h Shape.h

Square.o: Square.h Rectangle.h

# *****************************************************
# Clean Objects
.PHONY:clean
clean:
	rm -f *.o main