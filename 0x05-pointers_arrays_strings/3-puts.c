#include <stdio.h>
#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: a pointer to store the string value
 * Return: always string
 */
void _puts(char *str)
{
	int num = 0;

	while (*str != "\0")
	{
		_putchar(*str++);
	}
	_putchar("\n");
}
