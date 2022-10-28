#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 * int print_alphabet() -Function prints small Alphabets,return 0
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
