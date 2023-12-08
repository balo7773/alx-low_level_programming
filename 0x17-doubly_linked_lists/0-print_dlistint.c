#include "lists.h"

/**
 * print_dlistint - prints all the elmnts of a dlistin list
 * @h: a node
 *
 * Return: The no of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	nodes_num = 0;
	if (h == NULL)
		return (nodes_num);

	while (h)
	{
		printf("%d\n", h->n);
		nodes_num++;
		h = h->next;
	}
	return (nodes_num);
}