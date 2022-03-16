#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0
 */
void times_table(void)
{
	short int row = 0;
	short int col;
	short int val;
	short int modulo;
	const char zero = '0';

	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			val = (row * col) / 10;
			modulo = (row * col) % 10;

			if (val > 0)
				_putchar(val + zero);
			else if (val == 0 && col != 0)
				_putchar(' ');
			_putchar(modulo + zero);

			if (col == 9)
				break;

			_putchar(',');
			_putchar(' ');
			col++;
		}
		_putchar('\n');
		row++;
