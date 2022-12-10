#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;
	char base;

	for (hex = 0; hex < 0; hex++)
	putchar((hex % 10 + '0'));
	for (base = 'a'; base <= 'f'; base++)
	putchar(base);

	putchar('\n');

	return (0);
}
