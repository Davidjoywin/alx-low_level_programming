#include "main.h"

/**
 * _isalpha - checks for letters, lowercase or uppercase
 * @c: character to check
 * Return: return either 1 or 0
 */

int _isalpha(char c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
