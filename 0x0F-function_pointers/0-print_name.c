#include "function_pointer.h"
#include <stdio.h>
/*
 * print_name - print name using pointer
 * @name: name to be printed
 * @f: poineter to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
