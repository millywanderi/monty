#include "monty.h"

/**
 * disp_stack - display stack elements
 * @sta: stack holding elements
 * Return: stack size
 */
size_t disp_stack(const stack_t *sta)
{
	size_t sta_size = 0;

	while (sta != NULL)
	{
		printf("%d\n", sta->n);
		sta = sta->next;
		sta_size++;
	}
	return (sta_size);
}

/**
 * pall - prints all the values on the stack
 * @sta: stack to be printed
 * @line_num: line number
 * Return: void
 */
void pall(stack_t **sta, unsigned int line_num)
{
	(void) line_num;

	disp_stack(*sta);
}
