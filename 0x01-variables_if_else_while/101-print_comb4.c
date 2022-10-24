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
int e;

for (c = 48; c <= 55; c++)
{
	for (d = 49; d <= 56; d++)
	{
		for (e =50; e<= 57; e++)
		{
			
			if (((e * 100) + (d * 10) + (c *1)) > ((e * 100) + (c * 10) + (d * 1)) && ((e * 100) + (c * 10) + (d * 1)) > ((d * 100) + (e * 10) + (c * 1)) && ((d * 100) + (e * 10) + (c * 1)) > ((d * 100) + (c * 10) + (e * 1)) && ((d * 100) + (c * 10) + (e * 1)) > ((c * 100) + (e * 10) + (d * 1)) && ((c * 100) + (e * 10) + (d * 1)) > ((c * 100) + (d * 10) + (e * 1)))
			{
				putchar(c);
				putchar(d);
				putchar(e);
				if ((c + d + e) != (55 + 56 + 57))
				{putchar(44);
				putchar(32); }
			}	
		}
	}
}
putchar('\n');
return (0);
}
