#include "main.h"
/**
 * print_square - a function that uses # to print square
 * main - Entry point
 * @size - an int variable to store the square size
 * Return: Always 0 (success)
 */

void print_square(int size)
{
	int outer;
	int inner;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (outer = 0; outer < size; outer++)
	{
		for (inner = 0; inner < size; inner++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
}
