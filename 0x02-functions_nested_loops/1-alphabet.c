#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Description
 *
 * Return: Always 0.
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
