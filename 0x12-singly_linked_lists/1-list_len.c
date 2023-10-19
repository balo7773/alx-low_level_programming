#include "lists.h"

/**
 * list_len - list length
 * @h: pointer
 * Return: i
 */
size_t list_len(const list_t *h)
{
	unsigned int;
	i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
