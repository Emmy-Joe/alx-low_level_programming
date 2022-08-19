#include "main.h"
#include <stdio.h>

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: 1, if architecture is little endian, 0 in case of big endian.
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
