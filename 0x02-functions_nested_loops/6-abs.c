#include "main.h"
/**
 * _abs - func that output the abs value
 * @n: int datatype
 * return: always 0 success
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
	return (0);
}
