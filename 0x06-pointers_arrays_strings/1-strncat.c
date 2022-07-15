#include "main.h"

/**
 * _strncat -  a function that concatenates two strings.
 * @n: The limit of the concatenation
 * @dest: The destination value
 * @src: The source value
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int emy = 0, j = 0;

	while (dest[emy])
	{
		emy++;
	}
	while (j < n && src[j])
	{
		dest[emy] = src[j];
		emy++;
		j++;
	}
	dest[emy + n + 1] = '\0';
	return (dest);
}
