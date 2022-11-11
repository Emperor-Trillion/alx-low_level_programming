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

	while (a < 10)
	{
		for (b = 0; b < 15; b++)
		{
			if (b <= 9)
			_putchar((b % 10) + '0');
			if (b > 9)
			{
			_putchar('1');
			_putchar((b % 10) + '0'); }
		}
		a++;
		putchar('\n');
	}
}
