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
