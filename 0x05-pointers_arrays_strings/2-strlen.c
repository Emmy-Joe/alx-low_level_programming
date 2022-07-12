#include "main.h"

/**
 *_strlen -  a function that returns the length of a string.
 * @s: String to count
 * Return: Always 0
 */

int _strlen(char *s)
{
	int e = 0;

	for (; *s != '\0'; s++)
	{
	e++;
	}
	return (e);
}
