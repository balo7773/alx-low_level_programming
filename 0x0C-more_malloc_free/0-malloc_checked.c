#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - func to cause abnml process
 * @b: allocated memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
	{
		exit(98);
	}
	return (check);
}
