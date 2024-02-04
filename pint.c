#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pint function is called.
 */

void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (commands->head == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_count);
		free_commands();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", commandss->head->n);
}
