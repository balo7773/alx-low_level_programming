#include "main.h"
/**
 * more_numbers - function used to iterate nos 14 times
 * main - Entry point
 * void: a datatype with no return function
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int outer;
	int inner;

	for (outer = 0; outer <= 9; outer++)
	{
		for (inner = 0; inner < 15; inner++)
		{
			if (inner >= 10)
			_putchar(49);
			_putchar(inner % 10 + '0');
		}
		_putchar('\n');
	}
}
