#include <string.h>
#include <stdio.h>

int main ()
{
	char str[80] = "12345-67890-abcdefgh-ijklmnop & qr-s";
	const char d[2] = "-";
	char *token;

	token = strtok(str, d);
	while (token != NULL)
	{
		printf("%s\n", token);
		printf("%c\n", token[0]);
		token = strtok(NULL, d);
	}
	return (0);
}
