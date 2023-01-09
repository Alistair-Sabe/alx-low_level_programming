#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two argument numbers
 * @argc: args count
 * @argv: args vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int x = 0, y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
