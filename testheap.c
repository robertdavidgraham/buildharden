#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char *a;
	char *b;

	printf("pid=%d\n", getpid());

	a = strdup("hello");
	b = strdup("world");
	printf("normal: %s %s\n", a, b);

	/* buffer overlow */
	sprintf(a, "bonjour");
	printf("overflow: %s %s\n", a, b);

	/* use-after-free */
	free(a);
	free(b);
	printf("use-after-free: %s %s\n", a, b);

	/* double-free */
	free(a);
	printf("double-free: %s %s\n", a, b);

	return getchar();
}

