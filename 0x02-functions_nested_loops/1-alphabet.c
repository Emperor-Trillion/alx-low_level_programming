#include <stdio.h>
#include "main.h"

/**
 * void print_alphabet(void) - print alphabet
 * @parameters: None
 *
 * Return: 0
 */

int print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
putchar('\n');
return (0);
}
