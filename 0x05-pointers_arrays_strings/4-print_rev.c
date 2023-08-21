#include "main.h"
/**
 * print_rev - string in reverse order
 * @s: pointer string
 * Return: void type dont return
 */
void print_rev(char *s)
{
	int neg;
	int i;

	neg = 0;

	while (*s != '\0')
	{
		neg++;
		s++;
	}
	s--;


	for  (i = neg; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar("\n");
}
