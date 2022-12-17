#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			putchar(35);
		}
		if (x != size - 1)
			putchar('\n');
	}
	putchar('\n');
}
