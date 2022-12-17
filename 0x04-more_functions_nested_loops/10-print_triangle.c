#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: number of lines printed
 * Return: void
 */
void print_triangle(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 1; y < (size - x); y++)
			puchar(' ');
		for (y--; y < size; y++)
			putchar(35);
		for (x < (size - 1))
			putchar('\n');
	}
	putchar('\n');
}
