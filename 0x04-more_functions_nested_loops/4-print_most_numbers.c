#include "main.h"
/**
 * print_most_numbers - this function does not print 2 and 4
 * main - Entry point
 * void: a datatype that doesn't return any value
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
