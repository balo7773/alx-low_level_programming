#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that output array of int
 * @a: int variable pointer
 * @n: num of the array length
 * Return: void doesnt have a return value
 */
void print_array(int *a, int n)
{
	int index;

	int size;

	size = n - 1;

	index = 0;

	while (index < size)
	{
		printf("%d, ", a[index]);
		index++;
	}

	if (index == size)
	{
		printf("%d", a[size]);
	}
	printf("\n");
}
