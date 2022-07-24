#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed to by
 *  s with the constant byte b
 *
 *  @b: constant byte
 *  @n: bytes
 *  @s: pointed destination
 *  Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
