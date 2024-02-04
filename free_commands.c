#include "monty.h"

/**
 * free_commands - Frees all allocated memory for arguments.
 */

void free_commands(void)
{
	close_source();
	free_tks();
	free_commands();
}
