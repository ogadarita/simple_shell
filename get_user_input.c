#include "shell.h"

/**
* get_user_input - Gets user input from stdin
* @my_cmd: Buffer to store user input
* @size: Size of the buffer
*/

void get_user_input(char *my_cmd, size_t size)
{
	if (fgets(my_cmd, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			myPrintFunc("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			myPrintFunc("Error: Failed to read input.\n");
			exit(EXIT_FAILURE);
		}
	}
	my_cmd[strcspn(my_cmd, "\n")] = '\0';
}
