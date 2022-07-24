#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: The string to be searched.
 * @needle: The substring to be located
 *
 * Return: If the substring is located - a pointer to the beginning
 * of the located substring; else NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
