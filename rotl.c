#include "monty.h"

/**
 * rotl - rotates elements
 * @sta: stack
 * @line_num: line number
 * Return: void
 */
void rotl(stack_t **sta, unsigned int line_num)
{
	stack_t *up;
	stack_t *dow;
	(void) line_num;

	if (!sta || !*sta || !(*sta)->next)
	{
		return;
	}
	dow = up = *sta;
	while (up->next)
	{
		up = up->next;
	}
	up->next = dow;
	dow->prev = up;
	*sta = dow->next;
	(*sta)->prev->next = NULL;
	(*sta)->prev = NULL;
}
