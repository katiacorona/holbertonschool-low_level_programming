/*
 * File: 6-size.c
 * Auth: Katia Corona
 */

#include <stdio.h>

/**
 * main - Prints the size of various types, compiles, and runs.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zi byte(s)\n", sizeof(char));
	printf("Size of an int: %zi byte(s)\n", sizeof(int));
	printf("Size of a long int: %zi byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zi byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zi byte(s)\n", sizeof(float));
	return (0);
}
