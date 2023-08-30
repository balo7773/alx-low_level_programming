#include "main.h"
/**
 * _pow_recursion - a function to print exptl
 * @x: int variable
 * @y: int variable(raise to power)
 * Return: Always 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
