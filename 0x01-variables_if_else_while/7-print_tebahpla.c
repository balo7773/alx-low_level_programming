#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}

	putchar('\n');
	return (0);
}
