#include "main.h"
#include <stdio.h>

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
