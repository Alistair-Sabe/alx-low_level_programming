#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (NULL)
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, ln;

	i = 0;
	ln = 0;

	if (str == NULL)
		return (NULL);

	while (str[ln])
		ln++;
	duplicate = malloc(sizeof(char) * (ln + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}
