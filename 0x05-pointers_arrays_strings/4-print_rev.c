#include "main.h"
/**
 * print_rev
 * @s: the pointer to be used
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	int neg = 0;

	while (s[neg])
	{
		neg++;
	}
	while (neg--)
	{
		_putchar(s[neg]);
	}
	_putchar("\n");
}
		
