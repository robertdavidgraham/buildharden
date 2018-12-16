#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	printf("pid=%d\n", getpid());
	printf("sin() = %f\n", sin(1));
	return getchar();
}


