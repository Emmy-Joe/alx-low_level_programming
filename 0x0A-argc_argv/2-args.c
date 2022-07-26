#include <stdio.h>

/**
 * main -entry point
 * argc: argument count
 * @argv: argument vector
 * Return: argument vector
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
