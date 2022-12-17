#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: times line is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			putchar(' ');
		}
		putchar(92);
		if (x < (n - 1))
			putchar('\n');
	}
	putchar('\n');
}
