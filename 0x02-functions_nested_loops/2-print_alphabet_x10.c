#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	int ten;
	char alb;

	for (ten = 0; ten <= 9; ten++)
	{
		for (alb = 'a'; alb <= 'z'; alb++)
			_putchar(alb);
		_putchar('\n');
	}
}
