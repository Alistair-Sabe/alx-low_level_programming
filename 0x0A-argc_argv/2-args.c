#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: args count
 * @argv: args vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
