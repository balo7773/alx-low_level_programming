#include <stdio.h>

/**
  * cap_string - a function to caps all first words of string
  * @caps: a string variable
  * Return: return caps(string)
  */
char *cap_string(char *caps)
{
	int i;
	int j;
	char lower;

	char str[14] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, '0'};

	for (i = 0; caps[i]; i++)
	{
		for (j = 0; j < 14; j++)
		{
			lower = (caps[i] >= 97 && caps[i] <= 122);

			if (caps[i - 1] == str[j] && lower)
			{
			caps[i] = caps[i] - 32;
			}
		}
	}
	return (caps);
}
