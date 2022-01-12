#include "monty.h"

/**
 * pop - emoves the top element of the stack.
 * @stack: the header of the stack
 * @line_number: the line number
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (*stack == NULL)
	{
		dprintf(STDOUT_FILENO, "L%u: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}

	if (*stack != NULL)
	{
		(*stack) = (*stack)->next;
		free(temp);
	}

	if ((*stack)->next == NULL && (*stack)->prev == NULL)
	{
		free(stack);
	}

}
