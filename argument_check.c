#include "monty.h"

/**
 * argument_check - to check number of arguments
 * @argc: number of arguments
 * Return - nothing void
 */

void argument_check(int argc)
{
	if (argc == 2)
		return;
	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
