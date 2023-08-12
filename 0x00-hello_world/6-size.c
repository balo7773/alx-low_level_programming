#include<stdio.h>
 /*
  * main - Entry point
  *
  * Rerurn: Always 0 (Success)
  */

int main(void)
{
	char charnum;

	int intnum;

	long longnum;

	long int long_intnum;

	long long int long_longintnum;

	float floatnum;

	printf("Size of a char : %d byte(s)\n", sizeof(charnum));
	printf("Size of an int : %d byte(s)\n", sizeof(intnum));
	printf("Size of a long : %d byte(s)\n", sizeof(longnum));
	printf("Size of a long int : %d byte(s)\n", sizeof(long_intnum));
	printf("Size of a long long int : %d byte(s)\n", sizeof(long_longintnum));
	printf("Size of a float : %d bytes\n", sizeof(floatnum));
	return (0);
}
