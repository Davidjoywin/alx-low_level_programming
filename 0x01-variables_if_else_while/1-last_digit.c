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
	int last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_n);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_n);
	else if ((n < 6) && (n != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_n);
	/* your code goes there */

	return (0);
}
