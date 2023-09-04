#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a func that duplicate a string
 * @str: string to be copied from
 * Return: return dup string
 */
char *_strdup(char *str)
{
	unsigned int n;
	char *new_str;
	unsigned int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		size = size + 1;
	}

	new_str = (char *)malloc(size + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		new_str[n] = str[n];
	}

	new_str[size] = '\0';
	return (new_str);
	free(new_str);
}
