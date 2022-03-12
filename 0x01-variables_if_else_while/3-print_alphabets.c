#include <stdio.h>

/**
 * main - Prints all lowercase and uppercase alphabets alphabetically
 *
 * Return: 0
 */
int main(void)
{
	char alpha_lower = 'a';
	char alpha_upper = 'A';

	do {
		putchar(alpha_lower);
		alpha_lower++;
	} while (alpha_lower <= 'z');

	do {
		putchar(alpha_upper);
		alpha_upper++;
	} while (alpha_upper <= 'Z');
	putchar('\n');

	return (0);
}
