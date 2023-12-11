#include "main.h"
/**
 * _strncat - a function to cat n char to dest
 * @dest: the destination string variable
 * @src: the source string variable
 * @n: n char to cat(stored in int)
 * Return: dest (n char)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];

	}
	return (dest);
}
