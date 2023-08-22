#include "main.h"
/**
 * puts2 - a function that output the even no of str
 *
 * @str: The string pointer
 * Return: function is of void datatype
 */
void puts2(char *str)
{
	int lngt;

	int index;

	int L_index;

	char *curr_char = str;

	lngt = 0;

	L_index = 0;

	while (*curr_char != '\0')
	{
		curr_char++;
		lngt++;
	}

	L_index = lngt - 1;

	index = 0;

	while (index <= L_index)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	index++;
	}
	_putchar('\n');
}
