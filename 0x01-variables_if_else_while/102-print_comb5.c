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
	short int i, j, k, l;

	for (i = num; i <= 57; i++)
	{
		for (j = num; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (l = num; l <= 57; l++)
				{
					if (j == i && k == i && l == i)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
