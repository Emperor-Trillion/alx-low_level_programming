#include "main.h"

/**
 * _isdigit - checks whether input is a digit or not
 * @c: the input
 * Return: 1 for positive and 0 for negative
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
		putchar('\n');
	}
	else
	{
		return (0);
		putchar('\n');
	}
}
