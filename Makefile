MAINAPPDIR = ./
TARGET = main

INCLUDEDIR = $(MAINAPPDIR)/include
SOURCEDIR = $(MAINAPPDIR)/src

CXX = g++
CXXFLAGS = -g -Wall -std=c++11 -lm

OBJ = RK.o

HEADERS = $(INCLUDEDIR)/RK.h

all : $(TARGET)

$(TARGET) : main.o $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $(TARGET)

%.o : $(SOURCEDIR)/%.cxx $(INCLUDEDIR)/%.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

main.o : main.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY : clean

clean :
	rm -f *.o main
