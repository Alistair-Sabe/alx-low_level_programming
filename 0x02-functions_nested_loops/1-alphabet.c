#include "main.h"

/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alb;

	for (alb = 'á'; alb <= 'z'; alb++)
		_putchar(alb);

	_putchar('\n');
}
