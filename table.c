#include "shell.h"

/**
* main - Entry Point
* Return: void
*/

int main(void)
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d ", j);
		}
		printf("%d\n", i);
	}
}

