#include "main.h"
/**
 * _strlen - returns the string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * checker - checks each character of the string.
 * @s: string
 * @a: small int
 * @b: big int
 * Return: 0
 */
int checker(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + checker(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checker(s, 0, _strlen(s) - 1));
}
