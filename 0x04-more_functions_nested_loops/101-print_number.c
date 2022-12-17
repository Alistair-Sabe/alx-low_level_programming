#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: input
 * Return: void
 */
void print_number(int n)
{
	unsigned int cnt, x, y;

	if (n < 0)
	{
		putchar(45);
		 x = n * -1;
	}
	else
	{
		x = n;
	}

	y = x;
	cnt = 1;

	while (y > 9)
	{
		y /= 10;
		cnt *= 10;
	}

	for (; cnt >= 1; cnt /= 10)
	{
		putchar(((x / cnt) % 10) + 48);
	}
}
