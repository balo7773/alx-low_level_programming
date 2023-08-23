#include "main.h"
/**
 * _strcat - a function like the strcat()
 * @dest: the destination string
 * @src: string(src) to append to the dest sting
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
