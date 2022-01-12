#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: the header of the stack
 * @line_number: the line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	int i;
	stack_t *temp;

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

	(*stack) = (*stack)->next;
	(*stack)->n = (*stack->n) + temp->n;
	(*stack)->prev = NULL;
	free(temp);
}
