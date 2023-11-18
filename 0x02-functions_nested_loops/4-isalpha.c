#include "main.h"
/**
 * _islower - a func that checks for lower case
 * @c: int datatype
 * return: always 0 success
 */
int _isalpha(int c)
{
	if (c >= 98 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
