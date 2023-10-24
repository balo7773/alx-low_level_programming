#include "lists.h"


/**
 *listint_len - func that returns no of elmnts
 *@h: head pointer of the list
 *Return: the number of elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
