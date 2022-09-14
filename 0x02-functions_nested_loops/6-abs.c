#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @num: accept int as argument
 * Return: return int
 */

int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		num *= -1;
		return (num);
	}
}
