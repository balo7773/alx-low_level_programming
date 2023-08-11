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

	printf("Size of a char : %d", sizeoff(char));
	printf("Size of a int : %d", sizeoff(int));
	printf("Size of a long : %d", sizeoff(long));
	printf("Size of a long int : %d", sizeoff(long int));
	printf("Size of a long long int : %d", sizeoff(long long int));
	printf("Size of a float : %d", sizeoff(float));
	return (1);
}
