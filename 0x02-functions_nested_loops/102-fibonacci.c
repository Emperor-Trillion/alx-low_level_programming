#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long long int b = 1;
	long long int c = 2;
	int d;
	long long int t;

	printf("%llu, ", b);
	for (d = 0; d <= 49; d++)
	{
		printf("%llu, ", c);
		t = b + c;
		b = c;
		c = t;
	}
	return (0);
}
