#include "monty.h"

/**
 * pint - prints stack values
 * @sta: holds the values
 * @line_num: line number
 * Return: void
 */
void pint(stack_t **sta, unsigned int line_num)
{
	if (!sta || !(*sta))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*sta)->n);
}
