#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14:
 */
void more_numbers(void)
{
	int m, n;

	for (m = 1; m <= 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				putchar('1');
			putchar(n % 10 + '0');
		}
		putchar('\n');
	}
}
