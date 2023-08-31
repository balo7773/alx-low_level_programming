#include "main.h"
/**
 * find_sqrt - finding the sqrt through iteration
 * @n: int variable
 * @num:int variable
 * Return: find sqrt
 */
int find_sqrt(int n, int num)
{
	int sqr;

	sqr = num * num;

	if (sqr == n)
	{
		return (num);
	}
	else if (num * num > n)
	{
		return (-1);
	}
	return (find_sqrt(n, num + 1));
}

/**
 * _sqrt_recursion - function to find square root
 * @n: int variable
 * Return: find sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (find_sqrt(n, 1));
}
