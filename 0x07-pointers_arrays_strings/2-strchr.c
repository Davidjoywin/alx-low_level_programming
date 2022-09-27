#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string params
 * @c: character to find in string s
 * Return: returns pointer to char when c is find or NULL if not find
 */

char *_strchr(char *s, char c)
{
	int i;
	char *value;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			value = s + i;
			break;
		}
	}
	return (value);
}

