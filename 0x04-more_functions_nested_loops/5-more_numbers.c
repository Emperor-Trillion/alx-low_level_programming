#include "main.h"

/**
 * more_numbers - prints some number 10 times
 * takes not input
 *
 * Return: returns no output
 */
void more_numbers(void)
{
	int a = 0;
	int b;
	int c;

	while (a < 10)
	{
		for (b = 0; b < 15; b++)
		{
			c = (b / 1);
			if (b >= 10)
			{
				c = (b / 10); }
			_putchar((c + '0');
			if (b > 9)
			{
			_putchar((b % 10) + '0'); }
		}
		a++;
		_putchar('\n');
	}
}
