#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int b = 1;
	int c = 2;
	int d;
	int t;

	printf("%d, ", b);
	for (d = 0; d <= 49; d++)
	{
		printf("%u, ", c);
		t = b + c;
		b = c;
		c = t;
	}
	return (0);
}
