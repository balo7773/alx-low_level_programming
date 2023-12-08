#include "lists.h"

/**
 * sum_dlistint - func that gives sum of dlinklist
 * @head: head node
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}