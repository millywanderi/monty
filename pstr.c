#include "monty.h"

/**
 * pstr - prints stack's top string
 * @sta: stack
 * @line_num: line number
 * Return: void
 */
void pstr(stack_t **sta, unsigned int line_num)
{
	(void) line_num;
	stack_t *temporary = *sta;

	while (temporary != NULL)
	{
		if (temporary->n <= 0 || temporary->n > 127)
		{
			break;
		}
		putchar((char) temporary->n);
		temporary = temporary->next;
	}
	putchar('\n');
}
