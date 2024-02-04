#include "monty.h"

/**
 * incorrect_key - Handles an unknown instruction error.
 */

void incorrect_key(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
		commands->line_count, commands->str_tokens[0]);
	free_commands();
	exit(EXIT_FAILURE);
}

/**
 * get_directive - Sets the instruction based on the first token
 * in the input line.
 */

void get_directive(void)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall}, {"sub", &sub},
		{"div", &_div}, {"mul", &mul},
		{"rotl", &rotl}, {"rotr", &rotr},
		{"stack", &stack}, {"queue", &queue},
		{"pstr", &pstr}, {"pchar", &pchar},
		{"mod", &mod},
		{NULL, NULL}
	};

	if (commands->num_tokens == 0) /* no instructions */
		return;
	if (commands->tokens[0][0] == '#')
	{
		commands->instruction->opcode = "nop";
		commands->instruction->f = nop;
		return;
	}
	for (; instructions[i].opcode != NULL; i++)
	{
		/* compare opcode of instruction to first token (instruct..) */
		if (strcmp(instructions[i].opcode, commands->str_tokens[0])
				== 0)
		{
			commands->instruction->opcode = instructions[i].opcode;
			commands->instruction->f = instructions[i].f;
			return;
		}
	}
	incorrect_key();
}
