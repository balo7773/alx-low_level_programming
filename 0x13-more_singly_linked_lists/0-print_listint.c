#include "lists.h"

/**
 * print_listint - func that prints a linked list
 * @h: head of the list
 * Return: the no of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
