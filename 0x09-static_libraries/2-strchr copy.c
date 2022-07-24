#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first
 *
 * @s: a string
 * @c: a character
 * Return: 0 sucess
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0 ; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (NULL);
}
