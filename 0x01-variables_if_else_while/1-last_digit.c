#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lnum = n % 10;

	if (lnum > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lnum);

	}

	if (lnum == 0)
	{

	printf("Last digit of %d is %d and is 0\n", n, lnum);

	}

	if (lnum < 6 && lnum != 0)
	{

	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lnum);

	}

	return (0);
}
