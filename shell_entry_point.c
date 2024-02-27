#include "shell.h"

/**
* main - Entry Point
* Return: 0
*/

int main(void)
{
	char my_cmd[128];

	while (1)
	{
		disPrompt();
		get_user_input(my_cmd, sizeof(my_cmd));
		execCmd(my_cmd);
	}
	return (0);
}
