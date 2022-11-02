#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 3;
	int b = 0;

		for (a = 3; a < 1024; a++)
		{
			if (a % 3 == 0 || a % 5 == 0)
			{
				b = b + a;
			}
		}
	printf("%d", b);
	putchar('\n');
	return (0);
}
