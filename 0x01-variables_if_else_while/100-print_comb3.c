#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 1;

	while (i < 90)
	{
		putchar('0' + (i / 10));
		putchar('0' + (i % 10));
		if (i < 89)
		{
		putchar(',');
		putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
