#include "monty.h"

/**
 * initial_arguments - initial pointer to cmd_t
 */

void initial_arguments(void)
{
	commands = malloc(sizeof(cmd_t));
	if (commands == NULL)
		handle_malloc();

	commands->stream = NULL;
	commands->line = NULL;
	commands->num_tokens = 0;
	commands->line_count = 0;

}
