#include "main.h"
#include <stdio.h>

int is_divisible(int num, int div);

/**
 * is_prime_number -  Return if num is prime
 * @num: num to check
 * Return: int value
 */
int is_prime_number(int num)
{
	return (is_divisible(num, 1));
}
/**
 * is_divisible - Check if num is divisible
 * @num: Num to check i divisble
 * @div: divisor
 * Return: If num is divisible -0
 * If num is not divisible -1
 */

int is_divisible(int num, int div)
{
	if (num <= 1)
		return (0);

	if (num % div == 0 && div > 1)
		return (0);

	if ((num / div) < div)
		return (1);

	return (is_divisible(num, div + 1));
}
