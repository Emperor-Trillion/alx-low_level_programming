#include "main.h"

/**
 * print_triangle - prints triangles of sise 'size'
 * @size: partly the number of '#' to be printed
 *
 * Return: returns no output
 */
void print_triangle(int size)
{
	int a;
	int b = 0;
	int c;

	if (size >= 1)
	{
		for (a = 0; a < size; a++)
		{
			c = size - a - 1;
			while (b < c)
			{
				_putchar(' ');
				b++;
			}
			while (c < size)
			{
				_putchar('#');
				c++;
			}
			b = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
