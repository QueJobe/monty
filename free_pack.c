#include "monty.h"

/**
* free_pack - free the nodes in a stack list
* @head: first node of a dlistint link
* Return: void
*/
void free_pack(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_pack(head->next);
	}

	free(head);
}
