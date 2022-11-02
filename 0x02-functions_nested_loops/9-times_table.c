#include <stdio.h>
#include "main.h"

/**
 * times_table - prints number 9 multiplication table
 *
 * Return: Always 0.
 */
int times_table(void)

{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
			{
				putchar('0');
			}
			else if ((a * b) > 9)
			{
				putchar(',');
				putchar(' ');
				putchar(((a * b) / 10) + '0');
				putchar(((a * b) % 10) + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar((a * b) + '0');
			}
		}
		putchar('\n');
	}
	return (0);
}
