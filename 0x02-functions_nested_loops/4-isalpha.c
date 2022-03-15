#include "main.h"

/**
 * _isalpha - Check if char is an alphabet
 * @c: the char to check
 *
 * Return: 0 if char is an alphabet, else 0
 */
int _isalpha(int c)
{
	char lower = 'A';
	char upper = 'z';

	if (c >= lower && c <= upper)
		return (1);
	else
		return (0);
}

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	r = _isalpha('H');

	return (0);
}
