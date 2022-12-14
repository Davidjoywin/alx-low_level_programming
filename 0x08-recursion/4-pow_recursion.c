#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the * power of y
 * @x: param to be raise
 * @y: param power to
 * Return: return the result of x raised to the power of * y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}

