#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints from any entry to '98'
 * @n: n is the input
 *
 * Return: the last value always
 */
int print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
	putchar(n);
	putchar(',');
	putchar(' ');
	}
putchar(\n);
return (0);
}
