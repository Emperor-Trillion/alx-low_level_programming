#include <stdio.h>
#include "main.h"

/**
 * int print_alphabet() (Function prints small letters)
 * @parameter (void) (all aphabets printed)
 *
 * And prints it well
 * #include <stdio.h> global header, #include "main.h" from file
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
