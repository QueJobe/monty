#include "monty.h"

/**
 * pop - Removes the top element from the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pop function is called.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (commands->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_count);
		free_commands();
		exit(EXIT_FAILURE);
	}

	remove_stack_var();
	commands->stack_count -= 1;
}
