#include "lists.h"
/**
 * add_dnodeint_end - func that adds a new node at end of list
 * @head: head node
 * @n: int data
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
    {
		return (NULL);
    }
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
        {
			temp = temp->next;
        }
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}