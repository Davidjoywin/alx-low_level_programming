#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - main is the entry point
 *
 * Return: return 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of n is %d and is greater than 5", n);
	else if (n == 0)
		printf("Last digit of n is %d and is 0", n);
	else
		printf("Last digit of n is %d and is less than 6 and not 0", n);
	/* your code goes there */

	return (0);
}
