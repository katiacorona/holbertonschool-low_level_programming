#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;

	buffer = malloc(sizeof(char) * bufsize);
	if (buffer == NULL)
	{
		printf("Failed to allocate buffer\n");
		exit(1);
	}

	printf("$ ");
	characters = getline(&buffer, &bufsize, stdin);
	printf("%s\n", buffer);
	printf("%zu bytes read\n", characters);
	return (0);
}
