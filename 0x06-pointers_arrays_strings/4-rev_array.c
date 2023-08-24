#include "main.h"
/**
 * reverse_array - a function to reverse array
 * @a: an int variable
 * @n: an int variable
 * Return: doesnt return value
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = n - 1; i >= n / 2; i-- )
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
