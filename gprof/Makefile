all: test_gprof

test_gprof: test_gprof.c test_gprof_new.c
	gcc -Wall -pg test_gprof.c test_gprof_new.c -o test_gprof

clean:
	rm -rf test_gprof
