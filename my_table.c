#include <stdio.h>

/**
* main - Entry Point
* Return: void
*/

int main(void)
{
	int i;
	int j;

	getpid();


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", j);
		}
		printf("%d\n ", i);
	}
	return (0);
}
