#include "main.h"

/**
 * factorial - Return factorial of a given num
 * @n: Number to find factorial of
 * Return: If n > 0 -factorial of n
 * If n is lower than 0, the function should return -1 to indicate an error
 */

int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	res *= factorial(n - 1);

	return (res);
}
