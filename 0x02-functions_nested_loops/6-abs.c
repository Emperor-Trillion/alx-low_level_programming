#include <stdio.h>
#include "main.h"
/**
 * _abs - prints the absolute value of an entry
 * @n: n is the input
 *
 * Return: '0' always.
 */
int _abs(int n)
{

	if (n > 0)
	{
		n = n;
	}
	else if (n == 0)
	{
		n = 0;
	}
	else if (n < 1)
	{
		n = n * -1;
	}
return (n);
}
