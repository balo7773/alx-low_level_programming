#include "main.h"
/**
 * _isdigit - a function that checks digit 0 to 9
 * main - Entry point
 * @c: the variable to be checked
 * Return: Always 1 if c is a digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
