#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - func to execute a func on each array elmt
 * @array: int array
 * @size: size of the array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
