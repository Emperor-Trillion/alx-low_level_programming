#include <stdio.h>

/**
 * print_times_table - prints times table of inputed number
 *
 * Return: Always 0.
 */
int print_times_table(int n)

{
	int a;
	int b;
	int c;

	if ((n > 0) && (n <= 15))
	{
		for (a = 0; a < (n + 1); a++)
		{
			for (b = 0; b < (n + 1); b++)
			{
				c = a + b;
				if (b == 0)
				{
					putchar('0');
				}
				else if (c > 9 && c <= 99)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					printf("%d", c);
				}
				else if (c > 99)
				{
					putchar(',');
					putchar(' ');
					printf("%d", c);
				}
				else
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					printf("%d", c);
				}
			}
		}
		putchar('\n');
	}
	return (0);
}
