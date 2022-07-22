#include <stdio.h>

unsigned int factorial(unsigned int n)
{
	if (n <= 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

int main()
{
	int res = factorial(4);

	printf("%d\n", res);
	return (0);
}
