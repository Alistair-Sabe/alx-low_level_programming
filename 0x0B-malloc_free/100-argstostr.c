#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *argstostr - concatenates all ars of the program
 * @ac: number of args
 * @av: array of args
 * Return: Pointer to new string (Success, NULL (Error
 */

char *argstostr(int ac, char **av)
{
	int x = 0, y = 0, z = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		while (av[x][y])
		{
			len++;
			y++;
		}

		y = 0;
		x++;
	}
	
	str = malloc((sizeof(char) * len) + ac + 1);

	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			str[z] = av[x][y];
			z++;
			y++;
		}

		str[z] = '\n';

		y = 0;
		z++;
		x++;
	}

	z++;
	str[z] = '\0';
	return (str);
}
