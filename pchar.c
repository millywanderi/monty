#include "monty.h"

/**
 * pchar - prints stack top character
 * @sta: stack
 * @line_num: line number
 * Return: void
 */
void pchar(stack_t **sta, unsigned int line_num)
{
	if (sta == NULL || (*sta) == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		exit(EXIT_FAILURE);
		return;
	}
	else if ((*sta)->n < 0 || (*sta)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		exit(EXIT_FAILURE);
		return;
	}
	printf("%c\n", (*sta)->n);
}
