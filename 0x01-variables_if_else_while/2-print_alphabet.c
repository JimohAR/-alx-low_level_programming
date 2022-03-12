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
		putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	putchar('\n');

	return (0);
}
