#include <stdio.h>

/**
 * main - entry point of the prime factor code
 * Return: Return 0
 */

int main(void)
{
	long int tmp;
	long int num = 61285252475143;

	for (tmp = 2; tmp < num; tmp++)
	{
		if (num % tmp == 0)
		{
			num = num / tmp;
		}
	}

	printf("%ld\n", tmp);
	return (0);

}
