#include <stdio.h>
#include <unistd.h>

int main (void)
{
	pid_t pid;

	printf("Before fork function, I was alone\n");
	
	fork();

	if (pid == -1)
	{
		perror("Unsuccessful fork call\n");
	}
	printf("After fork I got married!:D\n");

	return (0);
}
