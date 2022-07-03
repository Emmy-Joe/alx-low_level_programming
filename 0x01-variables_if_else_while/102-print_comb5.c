#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; k++)
				{
					if (((l + k) > (j + i) && k >= i) || i < k)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if(i + j + k + l == 227 && i == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
