#include "monty.h"

/**
 * opc - sets FIFO LILO format
 * @sta: stack
 * @str: string
 * @line_num: line number
 * Return: void
 */
void opc(stack_t **sta, char *str, unsigned int line_num)
{
	instruction_t opcodes[] = OPERATIONS;
	int m = 0;

	if (!strcmp(str, "queue"))
	{
		args.trend = 0;
		return;
	}
	if (!strcmp(str, "stack"))
	{
		args.trend = 1;
		return;
	}
	while (opcodes[m].opcode)
	{
		if (strcmp(opcodes[m].opcode, str) == 0)
		{
			opcodes[m].f(sta, line_num);
			return;
		}
		m++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_num, str);
	exit(EXIT_FAILURE);
}
