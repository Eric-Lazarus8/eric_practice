CC = gcc

all : add sub mul div 
	$(CC) main.c add.o sub.o mul.o div.o -o arithmetic

add :
	$(CC) -c add.c -o add.o

sub :
	$(CC) -c sub.c -o sub.o

mul :
	$(CC) -c mul.c -o mul.o

div :
	$(CC) -c div.c -o div.o


clean :
	rm -f *.o arithmetic

