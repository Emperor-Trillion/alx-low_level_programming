#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints all minutes in a day
 *
 * Return: Always 0.
 */
int jack_bauer(void)

{
       int a;
       int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(':');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			putchar('\n');
		}
	}
	return (0);
}
