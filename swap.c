#include "monty.h"

/**
 * swap - swaps stack elements
 * @sta: stack
 * @line_num: line number
 * Return: void
 */
void swap(stack_t **sta, unsigned int line_num)
{
	int var = 0;
	stack_t *temp = NULL;

	if (sta == NULL || (*sta) == NULL || (*sta)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	temp = *sta;
	var = temp->n;
	temp->n = var;
	temp->n = temp->next->n;
	temp->next->n = var;
}
