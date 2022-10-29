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
	int a;
	if (n > 0)
	{
		a = '+';
		n = 1;
	}
	else if (n == 0)
	{
		a = '0';
		n = 0;
	}
	else
	{
		a = '-';
		n = '-';
	}
return (a);
return (n);
}
