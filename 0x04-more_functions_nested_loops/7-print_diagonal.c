#include "main.h"
/**
 * print_diagonal - a function to print diagonal
 * main - Entry point
 * void - a datatype that doesnt return value
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	int inner;
	int outer;

	for (outer = 0; outer < n; outer++)
	{
		for (inner = 0; inner < outer; inner++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
