#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: param number to find its find its sqrt
 * Return: return the sqrt of n
 */

int _sqrt_recursion(int n)
{
	int tmp = n / 2;
	static int x;

	if (n == 1)
	{
		return (1);
	}
	
	else if ((n > 1) && (x <= tmp))
	{
		if (_pow_recursion(x, 2) == n)
		{
			int i = x;
			x = 0;
			return (i);
		}

		else
		{
			x++;
			return _sqrt_recursion(n);
		}
	}
	else if ((x >= tmp) && (_pow_recursion(x, 2) != n))
		return (-1);
}

