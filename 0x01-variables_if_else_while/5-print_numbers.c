#include <stdio.h>

/**
 * main - Prints all single base 10 numbers in ascending order
 *
 * Return: 0
 */
int main(void)
{
	char num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
