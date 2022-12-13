#include "main.h"

/**
 * main - Print alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int ten;
	char alb;

	for (ten = 0; ten <= 9; ten++)\
	{
		for (alb = 'a'; alb <= 'z'; alb++)
			_putchar(alb)
		_putchar('\n');
	}
}
