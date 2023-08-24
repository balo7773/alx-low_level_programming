#include "main.h"

/**
  * string_toupper -a function that Change lwrcse to uppercse
  * @caps: The string variable to be changed
  *
  * Return: caps
  */
char *string_toupper(char *caps)
{
	int i;

	i = 0;

	while (caps[i])
	{
		if (caps[i] >= 'a' && caps[i] <= 'z')
		{
			caps[i] = caps[i] - 32;
		}

		i++;
	}

	return (caps);
}
