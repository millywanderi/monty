#include "monty.h"

/**
 * enq - adds a node on top of the queue
 * @sta: stack where node is added
 * @n: elements to add
 * Return: if successful return new node, otherwise NULL
 */
stack_t *enq(stack_t **sta, const int n)
{
	stack_t *cur_node = *sta;
	stack_t *n_node = malloc(sizeof(stack_t));

	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	if (*sta == NULL)
	{
		n_node->next = NULL;
		n_node->prev = NULL;
		*sta = n_node;
		return (n_node);
	}
	while (cur_node != NULL)
	{
		if (cur_node == NULL)
		{
			n_node->next = NULL;
			n_node->prev = cur_node;
			cur_node->next = n_node;
			break;
		}
		cur_node = cur_node->next;
	}
	return (n_node);
}

/**
 * plus_node - adds stack node
 * @sta: stack where node to be added
 * @n: push value
 * Return: new node upon success, otherwise NULL
 */
stack_t *plus_node(stack_t **sta, const int n)
{
	stack_t *n_node = malloc(sizeof(stack_t));

	if (n_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	n_node->next = *sta;
	n_node->prev = NULL;

	if (*sta != NULL)
	{
		(*sta)->prev = n_node;
	}
	*sta = n_node;

	return (n_node);
}
