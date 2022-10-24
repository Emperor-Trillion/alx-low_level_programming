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
int c;
int d;

for (c = 48; c <= 57; c++)
{
	for (d = 49; d <= 57; d++)
	{
	if (((d * 10) + (c * 1)) > ((c * 10) + (d * 1)))
		{
			putchar(c);
			putchar(d);
			if ((c + d) != (56 + 57))
			{putchar(44);
			putchar(32); }
		}
	}
}
putchar('\n');
return (0);
}
