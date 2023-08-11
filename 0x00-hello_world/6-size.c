#include<stdio.h>
 /*
  * main - Entry point
  *
  * Rerurn: Always 0 (Success)
  */

int main(void)
{
	printf("Size of a char : %i", sizeoff(char));
	printf("Size of a int : %i", sizeoff(int));
	printf("Size of a long : %i", sizeoff(long));
	printf("Size of a long int : %i", sizeoff(long int));
	printf("Size of a long long int : %i", sizeoff(long long int));
	printf("Size of a float : %i", sizeoff(float));
	return (1);
}
