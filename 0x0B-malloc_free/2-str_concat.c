#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function used to concat string
 * @s1: a string variable
 * @s2: a string variable
 * Return: return concat string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, sum;
	char *concat;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	sum = i + j;

	concat = (char *)malloc(sum + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
