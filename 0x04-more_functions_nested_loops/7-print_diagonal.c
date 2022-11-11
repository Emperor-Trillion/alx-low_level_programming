#include "main.h"

/**
 * print_diagonal - prints 'n' number of diagonal lines
 * @n: the number of '_' to be printed
 *
 * Return: returns no output
 */
void print_diagonal(int n)
{
	int a;

	if (n >= 1)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(92);
		}
	}
	_putchar('\n');
}
