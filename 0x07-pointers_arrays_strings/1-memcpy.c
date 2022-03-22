#include <stdio.h>

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: memory area where n bytes will be copied to
 * @src: memory area where n were bytes will be copied from
 * @n: number of bytes to be copied
 * Return: a pointer to 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
