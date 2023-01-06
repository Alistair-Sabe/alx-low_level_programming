#include "main.h"

/**
 * _strlen_recursion - Returns length of string
 * @s: string
 * Return: len of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares characters in a string
 * @s: string
 * @n1 smallest iterator
 * @n2: biggest iterator
 * Return: comparison
 */

int comparator(char *s, int n1, int n2)
{if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palidrome - detects if a string is a palindrome
 * @s: string
 * Retrun: 1 if string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
