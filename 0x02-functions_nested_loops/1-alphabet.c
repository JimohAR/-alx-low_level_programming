#include "main.h"

/**
 * main - Prints all lowercase alphabets alphabetically
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	do {
		_putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	_putchar('\n');

	return (0);
}
