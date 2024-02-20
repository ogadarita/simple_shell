#include "shell.h"

/**
* myPrintFunc - function that prints a prompt message in the unix shell
* @promptMsg: message to be printed
* Return: void
*/

void myPrintFunc(const char *promptMsg)
{
	write(STDOUT_FILENO, promptMsg, strlen(promptMsg));
}
