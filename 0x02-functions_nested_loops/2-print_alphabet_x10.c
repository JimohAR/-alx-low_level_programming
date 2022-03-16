#include "main.h"

/**
 * print_alphabet_x10 - Prints all lowercase alphabets alphabetically 10 times
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	short int i = 0;

	while (i < 10)
	{
		do {
			_putchar(alpha);
			alpha++;
		} while (alpha <= 'z');
		alpha = 'a';
		_putchar('\n');
		i++;
	}

}
