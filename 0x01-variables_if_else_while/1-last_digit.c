#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int nn;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
nn = n % 10;
if (nn > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, nn);
}
else if (nn < 6 && nn != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nn);
}
else if (nn == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, nn);
}
	/* code */
return (0);
}
