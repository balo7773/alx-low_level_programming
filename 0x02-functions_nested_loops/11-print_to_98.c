#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - func to print to 98
 * @n: int datatype
 * return: void
 */
void print_to_98(int n)
{
	int i;
	if (n == 98)
	{
		printf("%d\n", n);

	}
	if (n == 0)
	{
		for(i = n; i <= 97; i++)
		{
			printf("%d, ", i);
			if (i == 98)
			{
				printf("%d", i);
			}
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 98 && i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d", i);
			}
		}
		_putchar('\n');
	}
	else if (n < 98)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d, ", i);
		}
		if (i == 98)
			{
				printf("%d", i);
			}
		_putchar('\n');
	}
}

