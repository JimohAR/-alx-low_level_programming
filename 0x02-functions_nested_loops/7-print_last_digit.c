#include "main.h"

/**
 * print_last_digit - returns the the last digit
 * of a given number
 * @n: the number to return its last digit
 *
 * Return: any value from 0 to 9
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
		n = n * (-1);

	result = n % 10;
	_putchar(result + '0');

	return (result);
}
