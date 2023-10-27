#include "main.h"

/**
 * get_endianness - func that checks the endianness
 *
 * Return: big endianness and little endianness
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
