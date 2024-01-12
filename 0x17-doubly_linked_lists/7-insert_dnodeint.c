#include "lists.h"
/**
 * insert_dnodeint_at_index - func to insert node at index
 * @h: head pointer
 * @idx: index at which n is to be inserted
 * @n: data to be inserted
 * Return: new_node(success) or NULL()
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *head;
    unsigned int my_index;
    my_index = 0;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *h;
        if (*h != NULL)
        {
            (*h)->prev = new_node;
        }
        *h = new_node;
        return (new_node);
    }

    head = *h;
    while (head != NULL && my_index < idx - 1)
    {
        head = head->next;
        my_index++;
    }

    if (head != NULL)
    {
        new_node->prev = head;
        new_node->next = head->next;
        if (head->next != NULL)
        { 
            head->next->prev = new_node;
        }
        head->next = new_node;
    }
     return (new_node);
}