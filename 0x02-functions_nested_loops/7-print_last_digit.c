#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @ln - last number
 *
 * Return: value of last digit
 */
int print_last_digit(int ln)
{
	int n = ln % 10;

	if (n < 0)
	n *= -1;

	_putchar(n + '0');

	return (0);
}
