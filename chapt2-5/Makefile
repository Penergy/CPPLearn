# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g
objects = *.o

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o Array.o 
	$(CXX) $(CXXFLAGS) -o main main.o Array.o

# The main.o target can be written more simply

main.o: main.cpp Array.h ArrayRC.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Array.o: Array.h
# ArrayRC.o: ArrayRC.h

# *****************************************************
# Clean Objects
.PHONY:clean
clean:
	rm -f *.o main