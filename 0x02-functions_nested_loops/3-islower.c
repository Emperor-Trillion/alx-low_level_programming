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
		putchar(49);
	}
	else
	{
		putchar(48);
	}
return (0);
}
