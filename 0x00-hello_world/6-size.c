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

printf("Size of Short: %lu \n", (unsigned long)sizeof(a));
printf("Size of Int: %lu \n", (unsigned long)sizeof(b));
printf("Size of Long: %lu \n", (unsigned long)sizeof(c));
printf("Size of Char: %lu \n", (unsigned long)sizeof(d));
printf("Size of Float: %lu \n", (unsigned long)sizeof(e));
printf("Size of Double: %lu \n", (unsigned long)sizeof(f));

return (0);
}
