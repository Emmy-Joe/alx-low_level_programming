#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet -  prints the lower case alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
