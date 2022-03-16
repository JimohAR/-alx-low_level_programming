#include "main.h"

/**
 * _islower - Checks if char is a lower alphabet
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, else 0
 */
int _islower(int c)
{
	char first_alpha = 'a';
	char last_alpha = 'z';

	if (c >= first_alpha && c <= last_alpha)
		return (1);
	else
		return (0);
}
