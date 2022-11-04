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
	int d;
	long int t;

	printf("%lu, ", b);
	for (d = 0; d <= 49; d++)
	{
		printf("%lu, ", c);
		t = b + c;
		b = c;
		c = t;
	}
	return (0);
}
