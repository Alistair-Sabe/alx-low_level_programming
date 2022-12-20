#include "main.h"

/**
 * puts_hald - print half of a string
 * @str: parameter
 */
void puts_hald(char *str)
{
	int ln = 0;

	while (*str != '\0')
	{
		ln++;
		str++;
	}

	str -= (ln / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
