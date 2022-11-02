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
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar(',');
	_putchar(' ');
	}
_putchar('\n');
return (0);
}
