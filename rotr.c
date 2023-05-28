#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @sta: stack
 * @line_num: line number
 * Return: void
 */
void rotr(stack_t **sta, unsigned int line_num)
{
	stack_t *up;
	stack_t *dow;
	(void) line_num;

	if (!sta || !*sta || !(*sta)->next)
	{
		return;
	}
	dow = *sta;
	while (dow->next)
	{
		dow = dow->next;
	}
	up = dow->prev;
	dow->next = *sta;
	dow->next = NULL;
	up->next = NULL;
	(*sta)->prev = dow;
	*sta = dow;
}
