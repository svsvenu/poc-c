run: main.o main.S
	gcc -o run main.o venulib.o
    
main.o: main.c venulib.c
	gcc -c main.c venulib.c
    
main.S: main.c venulib.c
	gcc -S main.c venulib.c
