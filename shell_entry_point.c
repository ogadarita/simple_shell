#include "shell.h"

/**
* main - Entry Point
* Return: void
*/

int main(void)
{
	char my_cmd[128];

	while (1)
	{
		disPrompt();
		readCmd(my_cmd, sizeof(my_cmd));
		execCmd(my_cmd);
	}
	return (0);
}
