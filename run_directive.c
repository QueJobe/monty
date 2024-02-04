#include "monty.h"

/**
 * run_directive - Runs the instruction specified by the arguments.
 */

void run_directive(void)
{
	stack_t *stack = NULL;

	if (commands->num_tokens == 0)
		return;

	commands->instruction->f(&stack, commands->line_count);
}
