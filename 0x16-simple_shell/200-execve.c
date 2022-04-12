#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char cmd[] = "/bin/ls";
	char *argVec[] = {"ls", "-1", NULL};
	char *enVec[] = {NULL};

	printf("Start of execve call %s\n", cmd);
	printf("==========================================================\n");

	if (execve(cmd, argVec, enVec) == -1)
		printf("Error: Unable to execute execve\n");

	printf("Ooops, execve returned to continue with the parent process\n");

	return (0);
}
