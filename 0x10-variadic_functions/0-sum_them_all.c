#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int j = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);
		while (j < n)
		{
			sum += va_arg(args, int);
			j++;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
