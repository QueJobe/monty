#include "monty.h"

/**
 * free_head - Frees the memory allocated for the head and
 * sets it to NULL.
 */

void free_head(void)
{
	if (commands->head)
		free_pack(commands->head);

	commands->head = NULL;
}

/**
* free_cmds - free memory allocated
*/

void free_cmds(void)
{
	if (commands == NULL)
		return;

	if (commands->instruction)
	{
		free(commands->instruction);
		commands->instruction = NULL;
	}

	free_head();

	if (commands->line)
	{
		free(commands->line);
		commandss->line = NULL;
	}

	free(commandss);
}
