#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print the min num of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num;
       	int j;
       	int output;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	output = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		for (;num >= coins[j]; output++)
		{
			num -= coins[j];
		}
	}

	printf("%d\n", output);
	return (0);
}
