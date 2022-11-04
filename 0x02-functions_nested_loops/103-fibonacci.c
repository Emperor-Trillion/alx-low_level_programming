#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int b = 1;
	long int c = 2;
	long int t;
	long int Total = 0;

	for (c = 2; c <= 4000000; c++)
	{
		if (c % 2 == 0)
		{
			Total = Total + c;
		}
		t = b + c;
		b = c;
		c = t;
	}
	printf("%lu", Total);
	putchar('\n');
	return (0);
}
