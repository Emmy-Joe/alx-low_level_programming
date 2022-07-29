#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -> check for malloc.
 * @b: parameter b
 * Return: success
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
