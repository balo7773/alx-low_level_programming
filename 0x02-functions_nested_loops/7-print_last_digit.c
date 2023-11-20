#include "main.h"
/**
 * print_last_digit - func that prints the last digit of a no
 * @n: int datatype
 * return: always 0 success
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		n = n % 10;
 		i = n;
		if (i / 10 == 0)
 		{
			_putchar(48 + i);
			break;
		}
	}
	return (i);
}
