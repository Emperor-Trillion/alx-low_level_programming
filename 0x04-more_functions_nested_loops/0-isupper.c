#include "main.h"

/**
 * _isupper - returns whther input is upper case or not
 * @c: the input
 * Return: 1 for positive and 0 for negative
 */

int _isupper (int c)
{

	if (c >= 65 && c <= 90 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
