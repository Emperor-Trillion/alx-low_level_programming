#include "main.h"

/**
 * print_most_numbers - prints set of numbers with exception of some
 * takes not input
 *
 * Return: returns no output
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
		_putchar(a);
		}
	}
	_putchar('\n');
}
