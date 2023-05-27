#include "monty.h"

/**
 * f_stack - frees the stack
 * @sta: stack
 * Return: void
 */
void f_stack(stack_t *sta)
{
	stack_t *n_node;
	stack_t *cur_node = sta;

	if (sta)
	{
		n_node = sta->next;
		while (cur_node)
		{
			free(cur_node);
			cur_node = n_node;

			if (n_node)
			{
				n_node = n_node->next;
			}
		}
	}
}
