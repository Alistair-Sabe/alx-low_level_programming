#include "main.h"

/**
 * _puts - print a string
 * @str: str to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
