isOdd: isOdd.o
	$(CC) isOdd.o -isOdd

isOdd.o: isOdd.h
	$(CC) isOdd.h -isOdd.o

isOdd.h: isOdd.c
	$(CC) isOdd.c -isOdd.h

isOdd.c:
	return isOdd.c

clean:
	rm -rf *.o