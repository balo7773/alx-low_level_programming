#include "main.h"
/**
 * times_table - func of time table from 0 to 15
 * @n: int datatype
 * return: void
 */
void print_times_table(int n)
{
    int i, j, k;
    if (n >=0 && n <= 15)
    {
        for (i = 0; i <= n; i++)
        {
            _putchar('0');
            for (j = 1; j <= n; j++)
            {
                k = i * j;
                if (k < 10)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(48 + k);
                }
                else if (k <= 99)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    print_no(n);
                }
                else if (k >= 100)
                {
                    _putchar(',');
                    _putchar(' ');
                    print_no(n);
                }
            }
            _putchar('\n');
        }
    }
}/**
 * print_no - func to output no
 * @n: int datatype
 * return: void
 */
void print_no(int n)
{
	int a;
	int b;
    int c;

	if (n < 10)
	{
		_putchar('0' + n);
	}
	else if (n >= 10 && n <= 99)
	{
		a = n / 10;
		b = n % 10;
		_putchar(48 + a);
		_putchar(48 + b);
	}
    else if (n >= 100)
    {
        a = n / 100;
        b = (n % 100) / 10;
        c = n % 10;
        _putchar(48 + a);
        _putchar(48 + b);
        _putchar(48 + c);    
    }
}
