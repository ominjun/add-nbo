#Makefile
all : add-nbo

add-nbo: add-nbo.o main.o
	gcc -o add-nbo add-nbo.o main.o
main.o: add-nbo.h main.c

add-nbo.o : add-nbo.h add-nbo.c

clean: 
	rm -f *.o
	rm -f add-nbo
