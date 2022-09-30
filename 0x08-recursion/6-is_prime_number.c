#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a * otherwise return 0
 * @n: param number to check
 * Return: return 1 if prime else 0.
 */

int x = 2;

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n % x == 0)
	{
		return (0);
	}
	else if ((n % x != 0) && (x <= n))
	{
		x++;
		return is_prime_number(n);
	}
	else if ((n % x != 0) && (x > n))
	{
		return (1);
	}
}


