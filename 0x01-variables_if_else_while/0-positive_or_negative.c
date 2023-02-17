#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - 0-positive_or_negative
 *
 *  the program prints is positive if the number is greater than o,
 * is negative if its less than zero and zero is its zero
 *  return: 0 is success
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
