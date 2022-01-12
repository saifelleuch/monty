#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: the header of the stack
 * @line_number: the line number
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *arg_push;
	stack_t *new_stack;

	arg_push = strtock(NULL, " ");
	if (arg_push == NULL || int_check(arg_push) == 0)
	{
		dprintf(STDOUT_FILENO, "L%u: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	new_stack = malloc(sizeof(stack_t));
	if (new_stack == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new_stack->n = atoi(arg_push);
	new_stack->next = *stack;
	new_stack->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new_stack;
		*stack = new->stack;
}

/**
 * int_check - check if int or not
 * @arg_push: push argument
 * Return: 0 if int 1 if not
 */

int int_check(char *arg_push)
{
	int i;

	i = 0;
	while (i != '\0')
	{
		if (arg_push[i] == '-' && i == 0)
		{
			continue;
			i++;
		}
		if (isdigit(arg_push[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

/**
 * pall - prints all the values on the stack
 * @stack: the header of the stack
 * @line_number: the line number
 */

void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *temp;

	temp = *stack;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

}
