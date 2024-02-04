#include "monty.h"

/**
 * get_source_fail - function to handle file error
 * @filename: pointer to source file
 * Return: nothing void
 */
void get_source_fail(char *filename)
{
	dprintf(2, "Error: Can't open file %s\n", filename);
	free_cmds();
	exit(EXIT_FAILURE);
}

/**
 * get_source - gets command info from the source file
 * @filename: pointer to the file
 * Return: nothing void
 */
void get_source(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		get_source_fail(filename);

	command->f_source = fdopen(fd, "r");
	if (command->f_source == NULL)
	{
		close(fd);
		get_source_fail(fileneme);
	}
}
