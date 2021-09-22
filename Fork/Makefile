all: forktest forktest1

forktest: forktest.c
	gcc -g -O0 -o forktest forktest.c

forktest1: forktest1.c
	gcc -g -O0 -o forktest1 forktest1.c

clean:
	rm -rf *.o forktest forktest1
