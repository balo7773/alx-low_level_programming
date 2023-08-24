#include "main.h"

/**
 * _strncpy - a function used to copy a string
 * @dest: a string variable
 * @src: a string variable
 * @n: no of char to be copied(in int)
 * Return: dest (a string)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
