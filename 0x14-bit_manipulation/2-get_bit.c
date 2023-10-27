#include "main.h"

/**
 * get_bit - func that returns the bot value
 * @num: no which contains the bit
 * @index: unsigned int
 * Return: bit
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit = (num >> index) & 1;

	return (bit);
}
