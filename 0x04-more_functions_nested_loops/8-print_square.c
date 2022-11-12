#include "main.h"

/**
 * print_square - prints square of size 'size'
 * @size: the number of '#' which represents the size of then square
 *
 * Return: returns no output
 */
void print_square(int size)
{
	int a;
	int b;

	if (size >= 1)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
