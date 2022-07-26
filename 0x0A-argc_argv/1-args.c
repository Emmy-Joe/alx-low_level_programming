#include <stdio.h>

/**
 * main - ENtry point
 * @argc: Argument parameter
 * @argv: holds the arrays in argc
 * Return: success 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
