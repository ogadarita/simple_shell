#include "shell.h"

/**
* execCmd - executes the input command prompt
* @my_cmd: the command prompt
* Return: void
*/

void execCmd(const char *my_cmd)
{
	pid_t secondary_pid = fork();
	char *argv[] = {(char *)my_cmd, NULL};

	if (secondary_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (secondary_pid == 0)
	{
		if (execve(my_cmd, argv, NULL) == -1)
		{
		perror("execve");
		exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
