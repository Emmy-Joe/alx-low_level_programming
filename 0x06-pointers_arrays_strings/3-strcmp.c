#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, emy;

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (a <= b)
	{
		emy = a;
	}
	else
	{
		emy = b;
	}
	while (c <= emy)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
	
		else
		{
			r = s1[c] - s2[c];
			break;
		}
	
		c++;
	}
	return (r);
}
