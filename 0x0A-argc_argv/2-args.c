#include <stdio.h>

/**
 * main - output all arguments receivesd
 * @argc: int datatype
 * @argv: pointer to the char datatype.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
