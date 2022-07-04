#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float d;

	printf("size of a char: %d byte(s)\n", sizeof(b));
	printf("size of an int: %d bytes(s)\n", sizeof(a));
	printf("size of a long int: %d bytes(s)\n", sizeof(c));
	printf("size of an long long int: %d bytes(s)\n", sizeof(d));
	printf("size of an float: %d bytes(s)\n", sizeof(d));
	return (0);
}
