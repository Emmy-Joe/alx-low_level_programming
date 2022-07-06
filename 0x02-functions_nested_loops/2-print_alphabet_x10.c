#include "main.h"

/**
 * print_alphabet_x10 -> prints the lower case alphabet 10x
 */

void print_alphabet_x10(void)
{
	char k;
	int x = 0;

	while (x <= 9)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
	}
	_putchar('\n');
	x++;
}
