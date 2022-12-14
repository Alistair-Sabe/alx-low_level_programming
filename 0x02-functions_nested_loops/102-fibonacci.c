#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cnt = 3;

	long int a = 1, b = 2;
	long int nxt = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);

	while (cnt <= 50)
	{
		if (cnt == 50)
		{
			printf("%lu \n", nxt);
		}
		else
		{
			printf("%lu, ", nxt);
		}

		a = b;
		b = a;

		nxt = a + b;
		cnt++;
	}

	return (0);
}
