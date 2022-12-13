#include "main.h"

/**
 * main - Entry point
 *
 * description: print alphabet t10 times
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
