#include "main.h"
/**
 * print_numbers - a function that out put the no 0 to 5
 * main - Entry point
 * void: a void datatype accept any datatype (no return)
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	char i;

	i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
