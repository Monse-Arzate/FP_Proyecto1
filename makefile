conv: main.o conv.o
	gcc -o conv main.o conv.o

main.o : main.c fun.h
	gcc -c main.c

conv.o : conv.c fun.h
	gcc -c conv.c
