CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = fork_execl

all: $(TARGET)

$(TARGET): fork_execl.o
	$(CC) $(CFLAGS) -o $(TARGET) fork_execl.o

fork_execl.o: fork_execl.c
	$(CC) $(CFLAGS) -c fork_execl.c

clean:
	rm -f $(TARGET) *.o

