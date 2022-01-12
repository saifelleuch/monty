#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: header of the stack
 * @line_number: line number
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		dprintf(STDOUT_FILENO, "L%u: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
