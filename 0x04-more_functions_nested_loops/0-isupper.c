#include "main.h"
/**
 * _isupper - function to check for uppercase letter
 * main - Entry point
 * Return: Always 0 (success)
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
{
return(1);
}
else
{
_putchar('0');
}
return(0);
}
