#include "monty.h"

/**
 * div - divides top two elements of stack
 * @sta: stack
 * @line_num: line number
 * Return: void
 */
void divi(stack_t **sta, unsigned int line_num)
{
	int m;

	if (sta == NULL || *sta == NULL || (*sta)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	else if (((*sta)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		exit(EXIT_FAILURE);
	}
	m = ((*sta)->next->n) / ((*sta)->n);
	pop(sta, line_num);
	(*sta)->n = m;
}
