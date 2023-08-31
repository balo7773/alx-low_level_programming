#include "main.h"
/**
  * find_prime - function to check for prime no
  * @n: int variable
  * @i: the int variable
  * Return: find prime
  */
int find_prime(int n, int i)
{
	if (n > 1)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (n <= 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (find_prime(n, i + 1));
}

/**
  * is_prime_number - function to check for prime no
  * @n: int vsriable
  * Return: Always 0 (success)
  */
int is_prime_number(int n)
{
	return (find_prime(n, 1));
}
