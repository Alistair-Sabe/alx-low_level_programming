#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Do not print 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n !=2 && n != 4)
			putchar(n + '0');
		n += 1;
	}
	putchar('\n');
}
