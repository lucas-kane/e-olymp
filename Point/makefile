TARGET=a.out

CC=gcc
CFLAGS=-Wall -Wextra -g -O0 -std=c99

LIBS=-lm

all:$(TARGET)

$(TARGET): main.o point.o
	$(CC) $(CFLAGS) main.o point.o -o $(TARGET) $(LIBS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

point.o: point.c point.h
	$(CC) $(CFLAGS) -c point.c

clean:
	rm -rf *.o $(TARGET)

run: $(TARGET)
	./$(TARGET)