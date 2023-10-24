#include "lists.h"

/**
 *add_nodeint - func that add new node at the beginning
 *@head: head pointer
 *Return: addrs of the new elmnt and NULL(failure(
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
