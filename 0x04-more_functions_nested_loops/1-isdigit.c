#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: takes the character to be evaluated
 * Return: 1 if a digit, 0 otherwise
 */
int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
