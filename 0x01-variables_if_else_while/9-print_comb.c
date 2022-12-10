#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
/*forcefully convert an int to a char in putchar by adding '0' to the integer*/
	putchar(x + '0');
	if (x < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');	
	return (0);
}
