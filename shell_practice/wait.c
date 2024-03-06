#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>

int main(void)
{
	pid_t pid;

	/*creating child process*/
	pid = fork();

	/*when fork fails*/
	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return (1);
	}

	/*in child process*/
	if (pid == 0)
	{
		printf("child process created\n");
	}

	/*in parent process*/
	else
	{
		wait(NULL);
		sleep(30);
		printf("go back to parent process\n");
	}
	return (0);
}
