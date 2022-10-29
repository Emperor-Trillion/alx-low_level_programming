#include <stdio.h>
#include "main.h"

/**
 * isalpha - checks is input is an alphabet
 * @c: c is all spectrum of the ascii character to check
 *
 * Return: '1' if input is an alphabet and '0' if not.
 */
int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
return (c);
}
