#include <stdio.h>

 /**
  *
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
char charnum;

int intnum;

long longnum;

long int longint;

long long int B;

float floatnum;

printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(charnum));
printf("Size of an int : %lu byte(s)\n", (unsigned long)sizeof(intnum));
printf("Size of a long : %lu byte(s)\n", (unsigned long)sizeof(longnum));
printf("Size of a long int : %lu byte(s)\n", (unsigned long)sizeof(longint));
printf("Size of a long long int : %lu byte(s)\n", (unsigned long) sizeof(B));
printf("Size of a float : %d bytes\n", (unsigned long)sizeof(floatnum));
return (0);
}
