#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
* execCmd - executes the input command prompt
* @my_cmd: the command prompt
* Return: void
*/

void execCmd(const char *my_cmd)

{
	pid_t secondary_pid;
	char **argv = NULL;


	secondary_pid = fork();
	if (secondary_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (secondary_pid > 0)/*parent process*/
	{
		wait(NULL);
	}

	else
	{/*child process*/
		char *cmd_copy = strdup(my_cmd);
		if (!cmd_copy)
		{
			perror("strdup");
			exit(EXIT_FAILURE);
		}


		argv = malloc(sizeof(char *) * 3);
		if (!argv)
		{
			perror("malloc");
			free(cmd_copy);
			exit(EXIT_FAILURE);
		}

		argv[0] = "/bin/sh"; /* using /bin/sh to execute*/
		argv[1] = cmd_copy; /*command to be executed*/
		argv[2] = NULL; /*End of argument list*/


		if (execve(argv[0], argv, NULL) == -1)
		{
			fprintf(stderr, "hsh: Error executing command '%s'\n", my_cmd);
			perror("execve");
			free(cmd_copy);
			free(argv);
			exit(EXIT_FAILURE);
		}
	}
}
