#include <stdio.h>

/**
 * main - entry point
 * Betty I dont have your time
 * Return: 0 success
 */

int main(void)
{
	int age;

	printf("Enter you age ");
	scanf("%d", &age);
	if (age > 50)
	{
		printf("you are getting old\n");
	}
	else if (age == 50)
		printf("you are at the boundry\n");
	else if (age < 50)
	{
		printf("you are stiil young\n");
	}
	else
	{
		printf("you dont exist\n");
	}
	return (0);
}
