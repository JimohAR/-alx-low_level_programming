#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int b;
long int c;
char d;
float e;
long long int f;

printf("Size of char: %lu byte(s)\n", sizeof(d));
printf("Size of int: %lu byte(s)\n", sizeof(b));
printf("Size of long int: %lu byte(s)\n", sizeof(b));
printf("Size of long long int: %lu byte(s)\n", sizeof(f));
printf("Size of float: %lu byte(s)\n", sizeof(e));

return (0);
}
