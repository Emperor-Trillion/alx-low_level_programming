#include <stdio.h>
#include "main.h"

/**
 * _islower(int c) - checks is input is lower alphabet
 *@c is the integer to check

 * Returns '1' if it's a lower case and '0' if not.
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
