#include "monty.h"

/**
 * add - add stack top two elements
 * @sta: stack
 * @line_num: line number
 * Return: void
 */
void add(stack_t **sta, unsigned int line_num)
{
	int plus;

	if (!sta || !*sta || !((*sta)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	plus = ((*sta)->next->n) + ((*sta)->n);
	pop(sta, line_num);
	(*sta)->n = plus;
}
