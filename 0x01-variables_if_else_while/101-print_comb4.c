#include <stdio.h>

/**
 * main - Prints all combinations of 3-digits base 10 numbers in
 * ascending order
 * Description: only putchar is to be used to write to terminal (max of 6)
 * and the char literal is not used
 * and must be seprated by comma and space
 * Return: 0
 */
int main(void)
{
	short int num = 48;
	short int i, j, k;

	i = num;

	for (i; i <= 57; i++)
	{
		j = i + 1;
		for (j; j <= 57; j++)
		{
			k = j + 1;
			for (k; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
