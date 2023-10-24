#include "lists.h"
/**
*free_listint2 - func that frees a linked list
*@head: head pointer
*Return: void
*/

void free_listint2(listint_t **head)
{<F11><F11>
	listint_t *temp;

	if (head == NULL)
		return;

	if (*head == NULL)
	{
		free(*head);
		head = NULL;
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	head = NULL
}
