#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all integers from a given
 * integer to 98
 * @n: the given integer
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (1)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
			n--;
		}
	} else
	{
		while (1)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
			n++;
		}
	}

	putchar('\n');
}
