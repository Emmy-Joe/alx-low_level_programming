#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: destination location
 * @src: source location
 * @n: bytes to be copied
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
