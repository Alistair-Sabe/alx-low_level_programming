#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n += 1;
	}
	putchar('\n');
}
