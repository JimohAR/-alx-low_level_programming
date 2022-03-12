#include <stdio.h>

/**
 * main - Prints all lowercase alphabets alphabetically
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	do {
		if (alpha == 'e' || alpha == 'q')
		{
			alpha++;
			continue;
		}
		putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	putchar('\n');

	return (0);
}
