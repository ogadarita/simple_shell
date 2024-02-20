#include "shell.h"

/**
* execCmd - executes the input command prompt
* @my_cmd: the command prompt
* Return: void
*/

void execCmd(const char *my_cmd)
{
	pid_t secondary_pid = fork();

	if (secondary_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (secondary_pid == 0)
	{
		execve(my_cmd, const char *my_cmd, (char *)NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
