#include "monty"

cmd_t *commands = NULL;
/**
 * main - main entry point
 * @argc: number of arguments
 * @argv: pointer to argument list
 */

int main(int argc, char **argv)
{
	(void) argv;

	argument_check(argc);
	initial_argument();
	get_source(argv[1]);


	return(0);
}
