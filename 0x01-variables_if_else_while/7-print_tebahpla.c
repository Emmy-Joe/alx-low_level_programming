#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char lowc;

	for (lowc = 'z'; lowc >= 'a'; lowc--)
		putchar(lowc);
	putchar('\n');
		return (0);
}

