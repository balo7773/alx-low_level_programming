#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - func to concatenates two string
*@s1: first parameter
*@s2: second parameter
*@n:  number(max)  of bytes
*Return: string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		n++;

	concat = malloc(sizeof(char) * (n + 1));

	if (concat == NULL)
		return (NULL);

	n = 0;

	for (index = 0; s1[index]; index++)
		concat[n++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[n++] = s2[index];

	concat[n] = '\0';

	return (concat);
}
