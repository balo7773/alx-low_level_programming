#include "main.h"
#include <stdlib.h>
/**
* _calloc - func to allocate memory using malloc
*@nmemb: no of elmnts
*@size: size of the memry block to be allocated
*Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *calc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	calc = malloc(nmemb * size);
	if (calc != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			calc[i] = 0;
		}
		return (calc);
	}
	else
	{
		return (NULL);
	}
}
