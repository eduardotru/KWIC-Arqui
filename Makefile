CC=g++
CCFLAGS=-std=c++11 -w
FILES = InputProcessor/* OutputProcessor/* Sorter/* RotationProcessor/* WordProcessor/* WordsContainer/* LineRemover/*

all:
	$(CC) $(CCFLAGS) -o KWIC main.cpp $(FILES)
