#include <stdio.h>
#include "main.h"
/**
 * char *_strcpy - a function that copies string
 * @src: the source string
 * @dest: the destination string
 * Return: Returns pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;
	int src_length;

	src_length = 0;

	while (*(src + src_length) != '\0')
	{
		src_length++;
	}

	for (index = 0; index < src_length; index++)
	{
		dest[index] = src[index];
	}
	dest[src_length] = '\0';

	return (dest);
}

