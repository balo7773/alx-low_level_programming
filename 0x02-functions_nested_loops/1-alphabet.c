#include "main.h"

/**
 * print_alphabet - functions to list alphabets
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		_putchar(letter);

		letter++;
	}

	_putchar('\n');
}
