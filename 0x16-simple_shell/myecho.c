#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	for (int j = 0; j < ac; j++)
		printf("av[%d]: %s\n", j, av[j]);

	exit(EXIT_SUCCESS);
}
