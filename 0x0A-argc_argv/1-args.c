#include <stdio.h>

/**
 * main - printsno of arguement pass through it
 * @argc: datatype int
 * @argv: pointer to a char datatype
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int n;

	n = 0;
	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
