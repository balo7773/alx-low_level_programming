#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverse a string
 * @s: a string variable pointer
 * Return: Always String
 */
void rev_string(char *s)
{
	int start;
	int end;

	start = 0;
	end = strlen(s) - 1;

	while (start < end)
	{
		char rev = s[start];

		s[start] = s[end];
		s[end] = rev;

		start++;
		end--;
	}
}
