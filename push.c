#include "monty.h"

/**
 * push - Pushes an integer onto the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the push function is called.
 */
void push(stack_t **stack, unsigned int line_number)
{
	if (commands->num_tokens <= 1 || !(num_check(commands->str_tokens[1])))
	{
		free_cmds();
		dprintf(2, "L%d: usage: push integer\n", line_count);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		handle_malloc();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(commands->str_tokens[1]);
	if (commands->head == NULL)
		commands->head = *stack;
	else
	{
		if (commands->stack)
		{
			(*stack)->next = commands->head;
			commands->head->prev = *stack;
			commandss->head = *stack;
		}
		else
		{
			stack_t *temp = commandss->head;

			while (temp->next)
				temp = temp->next;
			temp->next = *stack;
			(*stack)->prev = temp;
		}
	}
	commandss->stack_count += 1;
}
