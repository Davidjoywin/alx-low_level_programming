#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: params string to capitalize
 * Return: return pointer to a char
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?'};

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		for (j = 0; j < (int)sizeof(sep); j++)
		{
			if (str[i] == sep[j] && (str[i + 1] >= 'a'))
			{
				if ((str[i + 1] <= 'z') && str[i + 1] != '\0')
				{
					str[i + 1] -= 32;
				}
			}

			i++;
		}
	return (str);
}
