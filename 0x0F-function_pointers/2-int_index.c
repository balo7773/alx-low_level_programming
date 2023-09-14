#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - a func that searches for an integer
 * @array: array parameter
 * @size: size of the array
 * @cmp: pointer variable(point to a func)
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
