#include "monty.h"

/**
 * handle_malloc - function to handle malloc errors
 * Return: nothing void
 */
void handle_malloc(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_cmds();
	exit(EXIT_FAILURE);
}
