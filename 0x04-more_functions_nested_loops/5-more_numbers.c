#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (j >= 10)
				putchar('1');
			putchar(y % 10 + '0');
		}
		putchar('\n');
	}
}
