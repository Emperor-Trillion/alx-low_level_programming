#include <stdio.h>
#include "main.h"

int print_alphabet(void)
{
	int a;
	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
putchar('\n');
return 0;
}