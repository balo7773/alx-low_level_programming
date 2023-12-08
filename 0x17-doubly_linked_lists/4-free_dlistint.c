#include "lists.h"

/**
 * free_dlistint - free dlistint_t
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	while (head != NULL)
	{
		copy = head;
		head = head->next;
		free(copy);
	}
}