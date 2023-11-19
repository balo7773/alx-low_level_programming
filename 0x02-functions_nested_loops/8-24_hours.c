#include "main.h"
/**
 * jack_bauer - func to output 24hrs
 *
 * return: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(48 + i);
				_putchar(':');
			}
			else
			{
				print_no(i);
				_putchar(':');
			}
			if (j < 10)
			{
				_putchar('0');
				_putchar(48 + j);
				_putchar('\n');
			}
			else
			{
				print_no(j);
				_putchar('\n');
			}
		}
	}
}
