#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, c, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = '1'; c <= '9'; c++)
		{
			for (k = '2'; k <= '9'; k++)
				if (i < c && c < k)
				{
					putchar(i);
					putchar(c);
					putchar(k);
					if (i != '7' || (c != '8' && k != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n');
	return (0);
}
