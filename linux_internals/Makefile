CC = gcc

CFLAGS = -Wall

all : add sub mul div 
	$(CC) main.c add.o sub.o mul.o div.o -o arithmetic

add :
	$(CC) $(CFLAGS) -c add.c -o add.o

sub :
	$(CC) $(CFLAGS) -c sub.c -o sub.o

mul :
	$(CC) $(CFLAGS) -c mul.c -o mul.o

div :
	$(CC) $(CFLAGS) -c div.c -o div.o


clean :
	rm -f *.o arithmetic

