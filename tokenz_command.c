#include "monty.h"

/**
 * tokenz_command - tokenize the lines read
 * Return: nothing void
 */

void tokenz_command(void)
{
	int i = 0;
	char *delm = " \n", *token = NULL, *cmdcpy = NULL;

	cmdcpy = malloc(sizeof(char) * (strlen(commands->line) + 1));
	strcpy(cmdcpy, command->line);
	commands->num_tokens = 0;
	token = strtok(cmdcpy, delm);
	while (token)
	{
		commands->num_tokens += 1;
		token = strtok(NULL, delm);
	}
	command->str_tokens = malloc(sizeof(char *) * (command->numtokens + 1));
	strcpy(cmdcpy, commands->line);
	token = strtok(cmdcpy, delm);
	while (token)
	{
		commands->str_tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (commands->str_tokens[i] == NULL)
			handle_malloc();
		strcpy(commands->str_tokens[i], token);
		token = strtok(NULL, delm);
		i++;
	}
	commands->str_tokens[i] = NULL;
	free(cmdcpy);
}
