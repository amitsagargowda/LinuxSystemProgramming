all: posixmq1 posixmq2

posixmq1: posixmq2.c
	gcc -g -O0 -o posixmq1 posixmq1.c -lrt


posixmq2: posixmq2.c
	gcc -g -O0 -o posixmq2 posixmq2.c -lrt


clean:
	rm -rf *.o posixmq1 posixmq2
