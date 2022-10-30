#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of an entry
 * @n: n is the input
 *
 * Return: the last value always
 */
int print_last_digit(int n)
{

	if (n >= 0)
	{
		n = n % 10;
		n = n * 11;
		_putchar(n);
		return (n);
	}
	else
	{
		n = n * -1;
		n = n % 10;
		_putchar(n);
		return (n);
	}
}
