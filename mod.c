#include "monty.h"

/**
 * mod - finds if a element is divisible by two
 * @sta: stack
 * @line_num: line number
 * Return: void
 */
void mod(stack_t **sta, unsigned int line_num)
{
	int module;

	if (sta == NULL || *sta == NULL || ((*sta)->next) == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_num);
	exit(EXIT_FAILURE);
	return;
	}
	else if (((*sta)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		exit(EXIT_FAILURE);
		return;
	}
	module = ((*sta)->next->n) % ((*sta)->n);
	pop(sta, line_num);
	(*sta)->n = module;
}
