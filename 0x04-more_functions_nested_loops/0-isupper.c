#include "main.h"
/**
 * _isupper - a function to check for uppercase
 * main - Entry point
 * @c: the variable to check
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}

	return (0);
}
