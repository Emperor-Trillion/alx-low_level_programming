#include "main.h"

/**
 * _isupper - returns whther input is upper case or not
 * @c: the input
 * Return: 1 for positive and 0 for negative
 */
int _isupper (int c)
{
	int a;

	if (c >= 65 && c <= 90)
	{
		a = 1;
		break;
	}
	else
	{
		a = 0;
		break;
	}
	return (a);
}
