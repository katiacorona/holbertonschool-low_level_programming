#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>

int main(int argc, char **argv)
{
	struct stat st;
	int i = 1;
	struct dirent *ents;
	DIR *dir;

	if (argc < 2)
	{
		printf("Usage: %s path_to_file...\n", argv[0]);
		exit(1);
	}
	while (argv[i])
	{
		printf("%s:", argv[i]);
		if (stat(argv[i], &st) == 0)
		{
			printf(" FOUND\n------------------Directory entities:"
				"------------------\n");
			dir = opendir(argv[i]);
			while ((ents = readdir(dir)) != NULL)
				printf("%s\n", ents->d_name);
			closedir(dir);
		}
		else
			printf(" NOT FOUND\n");
		i++;
	}
	return (0);
}
