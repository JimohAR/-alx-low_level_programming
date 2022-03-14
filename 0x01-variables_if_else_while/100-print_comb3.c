#include <stdio.h>

/**
 * main - Prints all combinations of 2-digit base 10 numbers in
 * ascending order
 * Description: only putchar is to be used to write to terminal (max of 5)
 * and the char literal is not used
 * and must be seprated by comma and space
 * Return: 0
 */
int main(void)
{
	short int num = 48;
	short int i, j;

	for (i = num; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
