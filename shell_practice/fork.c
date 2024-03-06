#include <stdio.h>
#include <unistd.h>

int main (void)
{
	pid_t pid;
	pid_t ppid;

	/*written before fork was called*/

	/*called fork*/

	pid = fork();

	if (pid == -1)
	{
		perror("Unsuccessful fork call\n");
		return (1);
	}

	if (pid == 0)
	{
		sleep(5);
		printf("I am the child\n");
	}
	else
	{
		ppid = getpid();
		printf("parent pid is: %u\n", ppid);
	}
	return (0);
}
