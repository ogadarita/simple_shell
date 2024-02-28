#include <stdlib.h>
#include <string.h>

/**
* parse_input - Parses the input string into tokens
* @input: The input string to be parsed
* Return: An array of tokens
*/

char **parse_input(char *input)
{
	char **tokens = malloc(sizeof(char *) * 64); /** maximum number of toxens*/
	char *token;
	int i = 0;


	token = strtok(input, "\n"); /** tokenizes using space and newline*/
	while (token != NULL)
	{
		tokens[i++] = token;
		token = strtok(NULL, "\n");
	}
	tokens[i] = NULL; /*array is terminated by NULL*/
	return (tokens);
}
