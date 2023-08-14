#include <stdio.h>
/**
 * main - Entry poin
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int base16;

	for (base16 = 0; base16 < 10; base16++)
	{
		putchar('0' + base16);
	}

	for (base16 = 'a'; base16 <= 'f'; base16++)
	{
		putchar(base16);
	}

	putchar('\n');
	return (0);
}
