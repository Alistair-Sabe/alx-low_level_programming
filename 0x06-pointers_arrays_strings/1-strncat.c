#include "main.h"

/**
 * _strncat - Concatenates two string using inputted num of bytes from src
 * @dest: String to be appended upon
 * @src: String to appended to dest
 * @n: Number of bytes from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, des_len = 0;

	while (dest[index++])
		des_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[des_len++] = src[index];
	return (dest);
}
