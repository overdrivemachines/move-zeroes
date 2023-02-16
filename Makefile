
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

move-zeroes: move-zeroes.o
	$(CC) $(CFLAGS) -o move-zeroes move-zeroes.o

move-zeroes.o: move-zeroes.cpp
	$(CC) $(CFLAGS) -c move-zeroes.cpp

clean:
	rm -rf move-zeroes move-zeroes.o
