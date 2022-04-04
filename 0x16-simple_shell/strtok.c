#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[80] = "12345-67890-abcdefgh-ijklmnop & qr-s"; 
	char *token;
	const char delim[2] = "-";
	int i = 0;

	token = strtok(str, delim);
	while (token != NULL)
	{
		printf("Token %d --> %s\n", i, token);
		printf("Token[0]: %c\n", token[0]);
		token = strtok(NULL, delim);
		i++;
	}
	return (0);
}
