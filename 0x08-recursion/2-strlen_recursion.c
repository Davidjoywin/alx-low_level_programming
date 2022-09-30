#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: param string
 * Return: returns the length of s
 */

int _strlen_recursion(char *s)
{
	static int n;

	if (*s != '\0')
	{
		n++;
		s++;
		_strlen_recursion(s);
	}
	return (n);
}

