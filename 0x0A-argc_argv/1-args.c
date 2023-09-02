#include <stdio.h>

/**
 * main - printsno of arguement pass through it
 * @argc: datatype int
 * @argv: pointer to a char datatype
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
