#include "main.h"
#include <stdio.h>
/**
 * swap_int- a function that swaps the values of 2 int
 * @a: the variable to store the address of b
 * @b: the  variable to store the address of a
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int swapping;

	swapping = *a;
	*a = *b;
	*b = swapping;
}
