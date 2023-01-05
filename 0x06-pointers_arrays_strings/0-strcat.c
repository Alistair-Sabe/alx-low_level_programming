#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: Pointer to result string destination
 */

char *_strcat(char *dest, char *src)
{
	int dslen = 0, i;

	while (dest[dslen])
	{
		dslen++;
	}

	for (i = 0; src[i] != 0; i++)
	{dest[dslen] = src[i];
		dslen++;
	}

	dest[dslen] = '\0';
	return (dest);
}
