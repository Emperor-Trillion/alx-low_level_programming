#include <stdio.h>
#include "main.h"

/**
 * _islower - checks is input is lower alphabet
 * @c: c is all spectrum of the ascii character to check
 *
 * Return: '1' if it's a lower case and '0' if not.
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
return (c);
}
