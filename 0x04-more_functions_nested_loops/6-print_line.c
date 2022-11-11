#include "main.h"

/**
 * print_line - prints 'n' number of lines
 * @n: the number of '_' to be printed
 *
 * Return: returns no output
 */
void print_line(int n)
{
	int a;

	if (n >= 1)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
