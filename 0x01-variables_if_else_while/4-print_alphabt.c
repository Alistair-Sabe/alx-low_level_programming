#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int qe;

	for (qe = 'a'; qe <= 'z'; qe++)
	{
	if (qe != 'e' && qe != 'q')
	putchar (qe);
	}
	putchar('\n');

	return (0);
}	
