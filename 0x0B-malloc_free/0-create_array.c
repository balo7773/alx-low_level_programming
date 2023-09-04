#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function to create char array
 * @size: unsigned int must be positive
 * @c: a char variable
 * Return: NULL if memory != allocated
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr = (char *)malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
}
