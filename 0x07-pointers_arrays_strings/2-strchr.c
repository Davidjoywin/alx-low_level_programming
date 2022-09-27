#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: char pointer and the string to check
 * @c: char to look for in s
 * Return: Returns a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	char *value = strchr((const char)s, int c);
	return (value);
}
