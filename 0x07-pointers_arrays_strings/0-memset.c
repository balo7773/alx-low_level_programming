#include "main.h"
/**
 * _memset - a function that fills n byte
 * @s: starting address of memory area 
 * @b: data to be stored(char) 
 * @n: number of bytes to fill
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
