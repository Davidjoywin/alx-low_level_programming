#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: char pointer and the string to check
 * @c: char to look for in s
 * Return: Returns a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;
	char *value;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			value = (s + i);
			break;
		}
	}
	return (value);
}
