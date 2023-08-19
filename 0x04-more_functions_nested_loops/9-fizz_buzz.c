#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	int mul_3;
	int mul_5;

	for (num = 1; num <= 100; num++)
	{
		mul_3 = num % 3;
		mul_5 = num % 5;
		if (mul_3 == 0 && mul_5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (mul_3 == 0)
		{
			printf("Fizz ");
		}
		else if (mul_5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf(" %d ", num);
		}
	}
	printf("\n");
	return (0);
}
