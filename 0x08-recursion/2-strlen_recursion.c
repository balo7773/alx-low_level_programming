#include "main.h"
/**
 * _strlen_recursion - a func to print string length
 * @s: avariable pointer
 * Return: Always 0 (success)
 */
int _strlen_recursion(char *s)
{
	int sum;
	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		sum = 1 + _strlen_recursion(s + 1);
		return (sum);
	}
}
