#include <stdio.h>
#include "main.h"
/**
 *  positive_or_negative - a function to check if int is pos or neg
 *  main - Entry point
 *  @i: int datatype to be checked
 *  Return: Always 0 (success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
	printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	else
	{
	printf("0 is zero\n");
	}
}
