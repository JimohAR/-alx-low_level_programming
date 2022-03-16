#include "main.h"

/**
 * jack_bauer - Prints every minute instance of the day
 */
void jack_bauer(void)
{
	short int hrs_unit = 0;
	short int hrs_tens = 0;
	short int mins_unit = 0;
	short int mins_tens = 0;
	char zero = '0';
	short int tmp = 0;

	while (1)
	{
		_putchar(hrs_tens + zero);
		_putchar(hrs_unit + zero);
		_putchar(':');
		_putchar(mins_tens + zero);
		_putchar(mins_unit + zero);
		_putchar('\n');

		tmp = (mins_unit + 1) / 10;
		mins_unit = (mins_unit + 1) % 10;
		if (tmp == 1)
		{
			tmp = (mins_tens + 1) / 6;
			mins_tens = (mins_tens + 1) % 6;
		}

		if (tmp == 1)
		{
			tmp = (hrs_unit + 1) / 10;
			hrs_unit = (hrs_unit + 1) % 10;
		}

		if (hrs_tens == 2 && hrs_unit == 4)
			break;

		if (tmp == 1)
			hrs_tens++;

	}
}
