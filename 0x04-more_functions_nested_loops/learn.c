#include <stdio.h>

int main(void)
{
	char a, b, c, d;
	int age;

	printf("Enter your four-letter nickname,followed by your two-digit age ");
	scanf("%c %c %c %c %d", &a, &b, &c, &d, &age);
	printf("My name is: %c%c%c%c and I am: %d.\n", a, b, c, d, age);
	return (0);

}
