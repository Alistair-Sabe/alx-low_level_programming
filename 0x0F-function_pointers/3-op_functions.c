#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum of a and b
 * @a: first digit
 * @b: second digit
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: num1
 * @b: num2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: num1
 * @b: num2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: num1
 * @b: num2
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  returns the remainder of the division of a by b
 * @a: num1
 * @b: num2
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
