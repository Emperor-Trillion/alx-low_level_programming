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

for (c = 48; c <= 57; c++)
{
	putchar(c);
	if (c != 57)
		putchar(44);
		putchar(32);
}
putchar('\n');
return (0);
}
