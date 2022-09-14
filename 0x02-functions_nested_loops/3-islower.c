#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: character pass into _islower
 * Return: return 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
