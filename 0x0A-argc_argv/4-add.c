#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers from args
 * @argc: arg count
 * @argv: arg vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int x, sum = 0;
	char *a;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a = argv[i];

			for (x = 0; x < strlen(a); x++)
			{
				if (a[x] < 48 || a[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}		
			sum += atoi(a);
			a++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
