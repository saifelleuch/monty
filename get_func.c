#include "monty.h"

/**
 * get_func - check the func.
 * @func: function to check
 * @stack: the header of the stack
 * @line_number: line number
 */

void get_func(char *func, stack_t **stack, unsigned int line_number)
{
	instruction_t valid_func[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{NULL, NULL}
	};
	size_t i;

	for (i = 0; valid_func[i] != NULL; i++)
	{
		if (strcmp(valid_func[i].opcode, func) == 0)
		{
			valid_func[i].f(stack, line_number);
			return;
		}

	}
	dprintf(STDOUT_FILENO, "L%u: unknown instruction %d\n", line_number, func);
	exit(EXIT_FAILURE);
}
