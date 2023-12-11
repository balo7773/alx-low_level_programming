
#include "main.h"
/**
 * _strchr - Entry point
 * @s: string to be searched
 * @c: char to check in s
 * Return: string(pointer to s)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
