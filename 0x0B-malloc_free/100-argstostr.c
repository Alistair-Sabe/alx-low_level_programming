#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all ars of the program
 * @ac: number of args
 * @av: array of args
 * Return: Pointer to new string (Success, NULL (Error
 */

char *argstostr(int ac, char **av)
{
	int x, y, z, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;
	
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		str[z] = '\n';
		z++;
	}

	return (str);
}
