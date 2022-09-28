#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: params string
 * @accept: params substring
 * Return: return an unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0' && *(s + j) != ' '; j++)
		{
			if (*(accept + i) == *(s + j))
			{
				n++;
			}
		}
	}
	return (n);
}
