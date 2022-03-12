#include <stdio.h>

/**
 * main - Prints all single base 10 numbers in ascending order
 * Description: only putchar is to be used to write to terminal
 * and the char literal is not used
 * Return: 0
 */
int main(void)
{
	short int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
