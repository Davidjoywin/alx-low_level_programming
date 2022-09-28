#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any set of a bytes
 * @s: params string
 * @accept: set of bytes
 * Return: returns a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;
	char *value;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(s + i) == *(accept + j))
		{
			value = (s + i);
			break;
		}
	}
	return (value);
}
