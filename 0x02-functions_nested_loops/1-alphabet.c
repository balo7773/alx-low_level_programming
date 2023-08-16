#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int letter;

	while (letter <= 122)
	{
		_putchar(letter);

		letter++;
	}

	_putchar('\n');;
}
