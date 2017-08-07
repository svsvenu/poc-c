run: main.o 
	gcc -o run main.o venulib.o
    
main.o: main.c venulib.c
	gcc -c main.c venulib.c
