#include "main.h"
/**
 * print_line - a function used to print underscore
 * main - Entry point
 * @n: a variable of int datatype
 * Return: Always 0 (success);
 */
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
