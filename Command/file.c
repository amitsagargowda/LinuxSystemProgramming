#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd=open("test.txt",O_RDWR|O_CREAT);
	while(1);
	return 0;
}

