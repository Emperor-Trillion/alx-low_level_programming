#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int b = 0;

	if (a == 3)
	{
		for (a = 1; a < 1024; a++)
		{
			if (a % 3 == 0)
			{
				b = b + a;
			}
		}
	}
	else if (a == 5)
	{
		for (a = 1; a < 1024; a++)
		{
			if (a % 5 == 0)
			{
				b = b + a;
			}
		}
	}
	printf("%d", b);
	putchar('\n');
	return (0);
}
