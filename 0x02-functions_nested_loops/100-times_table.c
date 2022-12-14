#include "main.h"

/**
 * print_times_table - prints the n times table
 * starting with 0.
 * @n: number to be printed
 */
void print_times_table(int n)
{
	int no, multp, prd;

	if (n >= 0 && n <= 15)
	{
		for (no = 0; no <= n; no++)
		{
			_putchar('0');
			for (multp = 1; multp <= n; multp++)
			{
				_putchar(',');
				_putchar(' ');
				prd = no * multp;
				if (prd <= 99)
					_putchar(' ');
				if (prd <= 9)
					_putchar(' ');
				if (prd >= 100)
				{
					_putchar((prd / 100) + '0');
					_putchar(((prd / 10)) % 10 + '0');
				}
				else if (prd <= 99 && prd >= 10)
				{
					_putchar((prd / 10) + '0');
				}
				_putchar((prd % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
