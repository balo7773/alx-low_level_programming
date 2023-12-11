#include "main.h"
/**
 * _isupper - a function to check for uppercase
 * main - Entry point
 * @c: the variable to check
 * Return: Always 1 for uppercase else 0 (success)
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
	return (1);
	}

	return (0);
}
