#include "monty.h"

/**
 * push - adds an value on stack
 * @sta: stack holding the value
 * @line_num: line number
 * Return: void
 */
void push(stack_t **sta, unsigned int line_num)
{
	char *m = args.arg;

	if ((dig(m)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	else if (args.trend == 1)
	{
		if (!plus_node(sta, atoi(args.arg)))
			exit(EXIT_FAILURE);
	}
	else
	{
		if (!enq(sta, atoi(args.arg)))
			exit(EXIT_FAILURE);
	}
}
