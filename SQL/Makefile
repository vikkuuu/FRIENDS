CC=g++

CFLAGS=-c

all: run

run: main.o run.o write.o read.o
		$(CC) main.o run.o write.o read.o -o  run
	
main.o: main.cpp
		$(CC) $(CFLAGS) main.cpp
		
run.o: run.cpp
		$(CC) $(CFLAGS) run.cpp

write.o: write.cpp
		$(CC) $(CFLAGS) write.cpp

rea0.o: read.cpp
		$(CC) $(CFLAGS) read.cpp


clean: 
		rm -rf *o run
