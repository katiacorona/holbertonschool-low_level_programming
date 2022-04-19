#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i = 1;
	struct stat buf;

	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <pathname>\n", argv[0]);
		exit(1);
	}
	while (argv[i])
	{
		printf("%s:", argv[i]);
		if (stat(argv[i], &buf) == -1)
		{
			printf(" NOT FOUND\n");
		}
		else
			printf(" FOUND\n");
		i++;
	}
	return (0);
}
