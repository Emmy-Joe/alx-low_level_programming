#include <stdio.h>

/**
 *  main - Prints the alphabetic
 *  Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
