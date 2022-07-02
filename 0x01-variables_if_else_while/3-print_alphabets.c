#include <stdio.h>                                                            

/**
 * main - Entry point
 * return - Always 0 (Success)
 */
int main(void)
{
	char lowc, upperc;

	for (lowc = 97; lowc <= 122; lowc++)
		putchar(lowc);
	for(upperc = 65; upperc <= 90; upperc++)
		putchar(upperc);
	putchar('\n');
	return (0);
}
