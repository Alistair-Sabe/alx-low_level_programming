#include "main.h"

/**
 * times_table - print the 9 time table
 */
void times_table(void)
{
	int no, multipl, prd;

	for (no = 0; no <= 9; no++)
	{
		_putchar('0');

		for (multipl = 1; multipl <= 9; multipl++)
		{
			_putchar(',');
			_putchar(' ');

			prd = no * multipl;

			if (prd <= 9)
				_putchar(' ');
			else
				_putchar((prd / 10) + '0');

			_putchar((prd % 10) + '0');
		}
		_putchar('\n');
	}
}
