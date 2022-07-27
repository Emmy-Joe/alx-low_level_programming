#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: argc parameter
 * @*argv: array of command list
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
