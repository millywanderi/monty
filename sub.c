#include "monty.h"

/**
 * sub - subtracts top 2 elements
 * @sta: stack
 * @line_num: line number
 * Return: void
 */
void sub(stack_t **sta, unsigned int line_num)
{
	int minus;

	if (!sta || !(*sta) || (*sta)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	minus = ((*sta)->next->n) - ((*sta)->n);
	pop(sta, line_num);
	(*sta)->n = minus;
}
