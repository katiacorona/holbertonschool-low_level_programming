#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - fork + wait + execve exercise.
 *
 * Description: Executes the command ls -l /tmp in 5 different child processes.
 * Each child should be created by the same process (the father). Waits for a
 * child to exit before creating a new child. Prints the PID for each child
 * after its execution.
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t child_pid[5];
	int status, n;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	for (n = 0; n < 5; n++)
	{
		child_pid[n] = fork();
		if (child_pid[n] == -1)
		{
			perror("Error: fork\n");
			return (1);
		}
		else if (child_pid[n] == 0)
		{
			printf("(%i) I'm your child #%i\n", getpid(), n);
			if ((execve(argv[0], argv, NULL)) == -1)
			{
        			perror("Error: Executing in child\n");
				return (1);
			}
			printf("------------==================------------\n");
		}
		else
		{
			sleep(1);
			wait(&status);
			printf("(%i) I created life -_-\n", getpid());
		}
	}
	return (0);
}
