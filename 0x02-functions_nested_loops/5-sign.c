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
		n = _putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		n = _putchar(0);
		return (0);
	}
	else
	{
		n = _putchar(45);
		return ('-');
	}
}
