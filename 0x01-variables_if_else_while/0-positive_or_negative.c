#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if a number is 0, positive, or negative
 * The program prints "is positive" if the number is greater than 0,
 * "is negative" if it's less than 0, and "is zero" if it's 0.
* Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}

	return (0);
	}
