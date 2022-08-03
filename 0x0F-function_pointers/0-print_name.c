#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: the name to print
 * @f: a pointer to a function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
