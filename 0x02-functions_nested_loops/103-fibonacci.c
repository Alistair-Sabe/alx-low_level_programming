#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	long x = 1, y = 2, sum = y;

	while (x + y < 4000000)
	{
		y += x;
		if (y % 2 == 0)
			sum += y;
		x = y - x;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
