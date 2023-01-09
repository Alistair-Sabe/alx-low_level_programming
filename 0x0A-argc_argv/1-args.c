#include "main.h"
#include <stdio.h>

/**
 * main - Print num of args
 * @argc: arg count
 * @argv: arg vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
