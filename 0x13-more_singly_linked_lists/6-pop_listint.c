#include "lists.h"

/**
*pop_listint -func that deletes the head node of a list
*@head: head pointer
*Return: the head node data(n)
*/

int pop_listint(listint_t **head)
{
	int pop;
	listint_t *temp = *head;

	if (head == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	pop = temp->n;
	free(temp);
	temp = NULL;

	return (pop);
}
