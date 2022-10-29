#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks if input is a positive, negative or zero
 * @n: n is all spectrum of the ascii character to check
 *
 * Return: '1', '0', '-1' for postive, zero, and negative
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		n = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		n = 0;
	}
	else if (n < 1)
	{
		_putchar('-');
		n = 1;
	}
return (n);
}
