#include "main.h"

/**
  * _isupper - checks if an alphabet is uppercase or lowercase
  * @c: character parameter
  * Return: return 0 or 1
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
