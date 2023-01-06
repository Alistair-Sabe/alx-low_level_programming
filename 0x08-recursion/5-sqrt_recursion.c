#include "main.h"
#include <stdio.h>


int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Return natural sqr toot of a num
 * @n: Number who sqr root is returned
 * Return: If n does not have a natural square root
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - find natuaral sqr root
 * @n: num to calculate sqr toot of
 * @i: iterate num
 * Return: natural sqr root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if  (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
