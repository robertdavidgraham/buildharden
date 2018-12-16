#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char stack[10] = "stack";
	if (argc > 1 && strcmp(argv[1], "heap") == 0)
		printf("%08p\n", malloc(10));
	else if (argc > 1 && strcmp(argv[1], stack) == 0)
		printf("%08p\n", stack);
	else
		printf("%08p\n", main);

	return 1;
}

