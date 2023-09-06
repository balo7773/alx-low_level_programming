#include <stdio.h>
#include <stdlib.h>

/**
 * main - the func add positive numbers
 * @argc: The arguement count
 * @argv: the arguement vector
 * Return: If != num, output will be error
 */
int main(int argc, char *argv[])
{
	int num;
       	int digit;
        int sum;

	sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
