#include "monty.h"

/**
 * mul - multiplies top two elements
 * @sta: stack
 * @line_num: line number
 * Return: void
 */
void mul(stack_t **sta, unsigned int line_num)
{
	int times;

	if (sta == NULL || *sta == NULL || (*sta)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		exit(EXIT_FAILURE);
		return;
	}
	times = ((*sta)->next->n) * ((*sta)->n);
	pop(sta, line_num);
	(*sta)->n = times;
}
