#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Description
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)

{
	int a;
	int aa;

	for (aa = 0; aa <= 9; aa++)
	{
		for (a = 97; a <= 122; a++)
		{
		putchar(a);
		}
		putchar('\n');
	}
return (0);
}
