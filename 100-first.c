#include "lists.h"

void myStartupFunc(void) __attribute__ ((constructor));

/**
 * myStartupFunc - prints a string before main function is run.
 */
void myStartupFunc(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
