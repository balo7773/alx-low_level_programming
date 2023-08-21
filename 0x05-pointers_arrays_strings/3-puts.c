#include <stdio.h>
#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: a pointer to store the string value
 * Return: always string
 */
void _puts(char *str)
{
	int num;

	for (num = 0; str[num]; num++)
	{
		_putchar(str[num]);
	}
	_putchar("\n");
}
