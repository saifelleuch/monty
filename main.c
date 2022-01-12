#include "monty.h"

/**
 * main - Monty programme
 * @argc: number of arguments passed
 * @argv: array of argument strings
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */

int main(int argc, char **argv)
{
	char *buffer = NULL;
	size_t n = 0;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		dprintf(STDOUT_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fo = fopen(argv[1], "r");
	if (fo == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	while (getline(&buffer, &n, fo) != -1)
	{
		line_number++;
		func = strtok(buffer, " \n");
		if (func != NULL && func[0] != '#')
			get_func(func, &stack, line_number);
	}
	exit(EXIT_SUCCESS);
}