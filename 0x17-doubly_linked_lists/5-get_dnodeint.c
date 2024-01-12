#include "lists.h"

/**
 * get_dnodeint_at_index - func that gets the node at index
 * @head: head node
 * @index: index from 0
 *
 * Return: node at specific index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int my_index;

	my_index = 0;
	while (head)
	{
		if (index == my_index)
			return (head);
		head = head->next;
		my_index++;
	}
	return (head);
}