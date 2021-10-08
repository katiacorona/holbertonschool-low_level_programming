#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: takes the character for evaluation.
 *
 * Return: 1 if a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c <= 'a') && (c >= 'z')) || ((c <= 'A') && (c >= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
