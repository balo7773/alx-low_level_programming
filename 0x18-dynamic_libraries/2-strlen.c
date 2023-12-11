#include "main.h"
/**
 * _strlen- a function to check string length
 * @s: char array(string) to be checked
 * Return: String length
 */
int _strlen(char *s)
{
	int strlth;

	strlth = 0;
	while (s[strlth])
	{
		strlth++;
	}

	return (strlth);
}
