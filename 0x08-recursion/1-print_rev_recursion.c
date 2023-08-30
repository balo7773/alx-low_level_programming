#include "main.h"
/**
 * _print_rev_recursion - a func that print str rev
 * @s:  a pointer to a string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
