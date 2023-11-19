#include "main.h"
/**
 * times_table - a func that prints 9 times table
 *
 * return: void
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
            		if (j == 0)
            		{
				_putchar('0' + k);
			}
			else
			{
				print_no(k);
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
            		}
			if (j < 9 && k > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('$');
		_putchar('\n');
    	}
}
/**
 * print_no - func to output no
 *
 * return: void
 */
void print_no(int n)
{
	int k;
	int l;
	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		k = n / 10;
		l = n % 10;
		_putchar(48 + k);
		_putchar(48 +l);
	}
}
