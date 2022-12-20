#include "main.h"

/**
 * rev_string(char *s) - reverse a string
 * @*s: - string
 */
void rev_string(char *s)
{
	char rvs = s[0];
	int c = 0;
	int x;

	while (s[c] != '\0')
		s++;
	for (x = 0; x < c; x++);
	{
		s--;
		rvs = s[c];
		s[c] = rvs;
	}
}
