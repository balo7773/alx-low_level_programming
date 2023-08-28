#include "main.h"
/**
 * rot13 - a function that encodes using rot13
 * @str: stringpointer variable
 * Return: strinng (*S)
 */
char *rot13(char *str)
{
	int i;
	int j;
	char nml[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == nml[j])
			{
				str[i] = code[j];
				break;
			}
		}
	}
	return (str);
}
