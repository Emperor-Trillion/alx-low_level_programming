#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int b = 1;
	long int c = 1;
	int d;
	long int t;

	for (d = 0; d <= 97; d++)
	{
		printf("%lu", c);
		if (c != 20365011074)
		{
		putchar(44);
		putchar(32); }
		t = b + c;
		b = c;
		c = t;
	}
	putchar('\n');
	return (0);
}
