#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char *av[])
{
	char *newav[] = {
		NULL,
		"hello",
		"world",
		"!",
		NULL
	};
	char *newenviron[] = {NULL};

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s <file-to-exec>\n", av[0]);
		exit(EXIT_FAILURE);
	}

	newav[0] = av[1];

	execve(av[1], newav, newenviron);
	perror("execve");
	exit(EXIT_FAILURE);
}
