#include <stdio.h>

/**
* main - check the code
*
* Return: returns 0
*/
int main(void)
{
	long int a = 612852475143;
	long int b;
	long int c;
	long int d;
	long int e;
	int count;

	for (b = 1; b < (a / 2); b++)
	{
		c = a % b;
		if (c == 0)
		{
			count = 0;
			for (d = 1; d < (b + 1); d++)
			{
				if (b % d == 0)
				{
					count++; }
			}
			if (count == 2)
			{
				e = b; }
		}
	}
		printf("%lu", e);
		printf("\n");
		return (0);
}
