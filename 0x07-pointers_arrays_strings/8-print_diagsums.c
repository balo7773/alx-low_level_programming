#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of diagonals
 * @a: array pointer
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum;
	int i;
	int j;
	int sum_1;

	sum = 0;

	sum_1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
	{
		if (i == j)
		{
			sum += a[i * size + j];
		}
		if (i + j == size - 1)
		{
			sum_1 += a[i * size + j];
		}
	}
	}
	printf("%d, %d\n", sum, sum_1);
}
