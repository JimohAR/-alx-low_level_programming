#include "main.h"

/**
 * main - Prints all lowercase alphabets alphabetically
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha = 'a';

	do {
		_putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	_putchar('\n');
}
