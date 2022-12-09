#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* printf("%d ", n); */
	/* your code goes there */
	y = n % 10;
	printf("Last digit of %d is %d ", n, y);
	if (y > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (!(y >= 6))
	{
	printf("and is less $y than and not 0\n");
	}
	else
	{
	printf("and is 0\n");
	}
	return (0);
}
