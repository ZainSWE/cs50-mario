mario: mario.o
	gcc -Wall -std=c99 mario.o -o mario

mario.o: mario.c
	gcc -Wall -std=c99 -c mario.c

clean:
	rm *.o mario
