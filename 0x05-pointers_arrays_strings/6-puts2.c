#include "main.h"
/**
 * puts2 - print even numbers only
 * @str: parameter
 * Return: void
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != 0)
	{
		if ((x % 2) == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
