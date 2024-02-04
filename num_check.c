#include "monty.h"

/**
 * num_check - Checks if a string is a valid integer
 * @str: The string to check.
 * Return: 1 if the string is a valid number, 0 otherwise.
 */
int num_check(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] == '-' && str[i + 1])
		{
			i++;
			continue;
		}
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
