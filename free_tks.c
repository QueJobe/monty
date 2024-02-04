#include "monty.h"

/**
 * free_tks - deletes allocated memory for tokens.
 */

void free_tks(void)
{
	int i = 0;

	if (commands->str_tokens == NULL)
		return;

	while (commands->str_tokens[i])
	{
		free(commands->str_tokens[i]);
		i++;
	}
	free(commands->str_tokens);
	commands->str_tokens = NULL;
}
