#include <stdio.h>
#include "main.h"

/**
 * _islower(int c) - Description
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		c = putchar(1);
	}
	else
	{
		c = putchar(0);
	}
return (c);
}
