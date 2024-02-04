#include "monty.h"

/**
 * close_source - Closes the source file and sets it to NULL.
 */

void close_source(void)
{
	if (commands->f_source == NULL)
		return;

	fclose(commands->f_source);
	commands->source = NULL;
}
