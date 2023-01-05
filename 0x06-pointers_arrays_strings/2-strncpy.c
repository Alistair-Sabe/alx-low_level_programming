#include "main.h"

/**
 * _strncpy - Copies at most an inputted num of bytes from src string
 * @dest: The buffer storing the string copy
 * @src: Source string
 * @n: Maximum number of bytes to copied from src
 * Return: A pointer to the result dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dst[index] = '\0';

	return (dest);
}
