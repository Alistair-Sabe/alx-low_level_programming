#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c + '0');
		c += 1;
	}
	putchar('\n');
}
