#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
int c;
int d;

for (a = 48; a <= 57; a++)
{
	for (b = 48; b <= 57; b++)
	{
		for (c = 48; c <= 57; c++)
		{
			for (d = 48; d <= 57; d++)
			{
				if (((a * 10) + (b * 1)) < ((c * 10) + (d * 1)))
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if ((a + c + d + b) != (57 + 57 + 56 + 57))
					{putchar(44);
					putchar(32); }
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
