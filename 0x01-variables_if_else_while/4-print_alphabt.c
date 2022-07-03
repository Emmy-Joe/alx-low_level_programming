#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowc;

	for (lowc = 'a'; lowc <= 'z'; lowc++)
	{ 
		if (lowc != 'e' && lowc != 'q')
			putchar(lowc);
	}
	putchar('\n');
	return (0);
}
