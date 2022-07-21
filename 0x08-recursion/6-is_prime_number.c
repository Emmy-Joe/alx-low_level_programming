#include "main.h"
#include <stdio.h>

int check_if_prime(int, int);

/**
 * is_prime_number -  returns 1 if the input
 * integer is a prime number, otherwise return 0
 *
 * @n: input integer
 * Return: 0 or 1 success
 */

int is_prime_number(int n)
{
	return (check_if_prime(n, 1));
}

/**
 * check_if_prime - checks for prime number
 * @i: iterartor
 * Return: 1 or 0
 * @n: input integer
 */

int check_if_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (1);
	return (check_if_prime(n, i + 1));
}
