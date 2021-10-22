cmake_minimum_required(VERSION 3.16)
project(morseparse)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

CFLAGS = -o
CC = g++

morseparse: main.o node.o trie.o dictionary.o
	$(CC) $(CFLAGS) -c main.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

node.o: node.cpp
	$(CC) $(CFLAGS) -c node.cpp

trie.o: trie.cpp
	$(CC) $(CFLAGS) -c trie.cpp

dictionary.o: dictionary.cpp
	$(CC) $(CFLAGS) -c dictionary.cpp

clean:
	rm -f core *.o