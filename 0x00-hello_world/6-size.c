#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
short a;
int b;
long c;
char d;
float e;
double f;

printf("Size of char: %lu \n", (unsigned long)sizeof(d));
printf("Size of int: %lu \n", (unsigned long)sizeof(b));
printf("Size of long int: %lu \n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu \n", (unsigned long)sizeof(c)) + (unsigned long)sizeof(c);
printf("Size of float: %lu \n", (unsigned long)sizeof(e)) + (unsigned long)sizeof(e);

return (0);
}
