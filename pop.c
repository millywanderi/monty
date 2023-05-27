#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @sta: stack
 * @line_num: line number
 * Return: void
 */
void pop(stack_t **sta, unsigned int line_num)
{
	stack_t *temp = NULL;

	if (sta == NULL || *sta == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}
	temp = (*sta)->next;
	free(*sta);
	*sta = temp;
	if (*sta == NULL)
	{
		return;
	}
	(*sta)->prev = NULL;
}
