# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g
objects = *.o

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o IntArray.o IntArrayRC.o
	$(CXX) $(CXXFLAGS) -o main main.o IntArray.o IntArrayRC.o

# The main.o target can be written more simply

main.o: main.cpp IntArray.h IntArrayRC.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Point.o: IntArray.h

Rectangle.o: IntArrayRC.h IntArray.h

# *****************************************************
# Clean Objects
.PHONY:clean
clean:
	rm -f *.o main