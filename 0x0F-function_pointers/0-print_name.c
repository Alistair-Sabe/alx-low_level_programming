#include "function_pointers.h"

/**
 * print_name - print name using pointer
 * @name: name to be printed
 * @f: poineter to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
