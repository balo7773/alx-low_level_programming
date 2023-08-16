#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int letter;

	while (letter <= 122)
	{
		_putchar(letter);

		letter++;
	}

	_putchar('\n');
	return (0);
}
