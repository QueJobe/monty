#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t

/**
 * struct cmd_s - handles comands on files
 * @f_source: pointer to the opened file
 * @line: string of the line read from the file
 *
 * Description: to hold comands that will be used
 * in the different parts of the program and
 * to handle memory allocation and freeing
 */
typedef struct cmd_s
{
	FILE *f_source;
	char *line;
	unsigned int line_count;
	char **str_tokens;
	int num_token;
	instruction_t *instruction;
	int stack_count;
	stack_t *head;
	int stack
} cmd_t;

extern cmd_t *commands;


/*function prototypes*/
void argument_check(int argc);
void initial_arguments(void);
void handle_malloc(void);
void get_source_fail(char *filename);
void get_source(char *filename);
void tokenz_command(void);
void incorrect_key(void);
void get_directive(void);
void free_tks(void);
void close_source(void);
void run_directive(void);
int num_check(char *str);
void free_head(void);
void free_cmds(void);
void free_pack(stack_t *head);
void free_commands(void);
void remove_stack_var(void);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);

int dprintf(int fd, const char *format, ...);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
FILE *fdopen(int fd, const char *mode);

#endif /*Monty header file */
