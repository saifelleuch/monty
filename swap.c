#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: the header of the stack
 * @line_number: the line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int i;
	stack_t *temp;
	int x;

	temp = *stack;
	i = 0;
	while (*stack != NULL)
	{
		(*stack) = (*stack)->next;
		i++;
	}

	if (i < 1)
	{
		dprintf(STDOUT_FILENO, "L%u: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	temp->n = x;
	temp->n = temp->next->n;
	temp->next->n = x;

}
