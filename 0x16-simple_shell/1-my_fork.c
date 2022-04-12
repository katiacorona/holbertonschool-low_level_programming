#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t my_pid, child_pid;

	child_pid = fork();
	if (child_pid == -1)
		perror("Error: Unable to fork\n");
	my_pid = getpid();
	printf("My PID is %u\n", my_pid);
	if (child_pid != 0)
		printf("(%u) %u, I'm your father.\n", my_pid, child_pid);
	else
		printf("(%u) Nooooooooooooo!\n", my_pid);
	return(0);
}
