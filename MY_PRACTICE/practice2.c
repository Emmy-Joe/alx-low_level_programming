#include <stdio.h>

/**
 * main - entry point
 * Betty I dont have your time
 * Return: 0 success
 */

int main(void)
{
	int age;

	printf("Enter your age ");
	scanf("%d", &age);
	if (age > 50 && age < 100)
	{
		printf("you are getting old\n");
	}
	else if (age >= 100)
	{
		printf("You are INDEED OLD\n");
	}
	else if (age == 50)
	{
		printf("you are at the boundry\n");
	}
	else if (age < 50 && age != 0)
	{
		printf("you are stiil young\n");
	}
	else
	{
		printf("you dont exist\n");
	}
	return (1);
}
