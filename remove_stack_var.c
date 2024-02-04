#include "monty.h"

/**
* remove_stack_var - removes node at the head/top
* Return: void
*/
void remove_stack_var(void)
{
	stack_t *temp;

	temp = commands->head;
	commands->head = temp->next;
	free(temp);
}
