#include "main.h"

/**
 * _pow_recursion - Returns value of x raised to power of y
 * @x: Number to be raised
 * @y: power value
 * Return: Value of x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	res *= _pow_recursion(x, y - 1);

	return (res);
}
