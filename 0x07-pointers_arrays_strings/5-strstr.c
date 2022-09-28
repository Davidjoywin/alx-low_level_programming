#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: params string to search from
 * @needle: params substring to found from haystack
 * Return: return a pointer to the beginning of the location substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *value;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle))
		{
			for (j = 0; *(needle + j) != '\0'; j++)
			{
				if (*(haystack + i) == *(needle + j))
				{
					value = needle;
				}
			}
		}
	}
	return (value);
}
