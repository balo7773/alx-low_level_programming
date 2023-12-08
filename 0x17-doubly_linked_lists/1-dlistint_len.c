#include "lists.h"

/**
 * dlistint_len - func that gives no of elmnts in a dlinklist 
 * @h: head node
 *
 * Return: no of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	nodes_num = 0;
	if (!h)
		return (nodes_num);
	while (h)
	{
		nodes_num++;
		h = h->next;
	}
	return (nodes_num);
}