#include <stdio.h>

/**
 * main - check the code
 *
 * Return: returns 0
 */
int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			if (a != 100)
			{
				printf(" "); }
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
