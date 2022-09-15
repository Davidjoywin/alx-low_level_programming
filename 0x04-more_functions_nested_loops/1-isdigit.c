#include "main.h"

/**
  * _isdigit - checks for digit between 0 - 9
  * @c: input parameter
  * Return: return 0 or 1
  */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
