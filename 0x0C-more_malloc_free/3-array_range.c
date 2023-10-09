#include "main.h"
#include <stdlib.h>
/**
* array_range - func tp creates an array of int
* @min: smallest no in the array
* @max: lagrest no in the array
* Return: int
*/

int *array_range(int min, int max)
{
	int *block;
	int i;
	int j;

	i = 0;

	j = 0;

	if (min > max)
	{
		return (NULL);
	}
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (i = min; i <= max; i++)
		{
			block[j] = i;
			j++;
		}
		return (block);
	}
	else
	{
		return (NULL);
	}
}
