#include "main.h"
/**
 * puts_half - a function that output half of a string
 * @str: a string pointer
 * Return: void datatype (no return value)
 */
void puts_half(char *str)
{
	int index;

	int scnd_half;

	int length;

	while (str[length] != '\0')
	{
		length++;
	}

	scnd_half = length / 2;

	if (length % 2 == 1)
	{
		scnd_half = (length + 1) / 2;
	}

	for (index = scnd_half; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
