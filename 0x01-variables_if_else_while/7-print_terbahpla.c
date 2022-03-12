#include <stdio.h>

/**
 * main - Prints all lowercase alphabets in reverse order
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'z';

	do {
		putchar(alpha);
		alpha--;
	} while (alpha >= 'a');
	putchar('\n');

	return (0);
}
