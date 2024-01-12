#include "lists.h"
/**
 * delete_dnodeint_at_index - func that delete a node at index pos of a linked list
 * @head: pointer to head in function
 * @index: index or position to be added
 * Return: 1 success -1 failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
    dlistint_t *current = *head;
    unsigned int i = 0;

    if (*head == NULL)
    {
        return;
    }

    if (idx == 0)
    {
        *head = current->next;
        if (*head != NULL)
        {
            (*head)->prev = NULL;
        }
        free(current);
        return;
    }

    while (current != NULL && i < idx)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
    {
        return;
    }

    current->prev->next = current->next;
    if (current->next != NULL)
    {
        current->next->prev = current->prev;
    }
    free(current);
    return (1);
}