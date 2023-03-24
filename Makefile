all: main.c
	gcc -c main.c priorityQueue.c -I.
	gcc main.o priorityQueue.o -o main.exe
	main.exe