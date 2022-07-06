#include "main.h"

/**
 * print_alphabet_x10 -> prints the lower case alphabet 10x
 */

void print_alphabet_x10(void)
{
	int k;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
	}
	_putchar('\n');
}
