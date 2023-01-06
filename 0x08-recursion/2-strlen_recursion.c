#include "main.h"

/**
 * _strlen_recursion - Return length of string
 * @s: String to measure
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s)
	{
		ln++;
		ln += _strlen_recursion(s + 1);
	}

	return (ln);
}
