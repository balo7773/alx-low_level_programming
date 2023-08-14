#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);

		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}

	}

	return (0);
}
