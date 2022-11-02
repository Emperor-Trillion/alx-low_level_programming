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
	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
			_putchar(',');
			_putchar(' '); }
		}
	}
	else
	{
		for (n = n; n>=98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
			_putchar(',');
			_putchar(' '); }
		}
	}
_putchar('\n');
return (0);
}
