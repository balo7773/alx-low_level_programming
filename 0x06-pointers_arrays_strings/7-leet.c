#include "main.h"
/**
 * leet -replacing num with ltr
 * @n: char variable
 * Return: char n
 */
char *leet(char *n)
{
	int i;
	int j;

	char ltr[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == ltr[j])
			{
				n[i] = num[j];
			}
		}
	}
	return (n);
}



