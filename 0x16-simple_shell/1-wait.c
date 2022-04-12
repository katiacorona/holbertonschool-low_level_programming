#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>

#define UNUSED(x) (void)(x)

/**
 * main - Tests the wait function.
 *
 * Description: First, prints digits exactly when I call printf to the stdout
 * with fflush. Flush makes the outcome rather unpredictable.
 * Second, using wait, we will tell the program to wait for the child proces
 * to print all its elements, and then continue with its own process.
 */
int main(int argc, char *argv[])
{
	int id = fork();
	int n, wstatus;
	UNUSED(argv);
	UNUSED(argc);

	if (id == -1)
	{
		perror("Error: Fork");
		exit (1);
	}

	if (id == 0) /* Child process runs the below process with its own
		      * n value.
		      */
	{
		n = 1;
	}
	else /* Main process runs with its own different n value */
	{
		wait(&wstatus);
		n = 6;
	}

	int i;
	for (i = n; i < n + 5; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	return (0);
}
