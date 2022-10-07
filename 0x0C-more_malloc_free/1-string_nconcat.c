#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: the first n bytes of s2
 * Return: returns the concatenated strings
 */

char *string-nconcat(char *s1, char *s2, unsigned int n)
{
	int i, s1_size, *new_string;

	s2_size = 0;
	while (s1[s1_size] != '\0')
	{
		s1_size++;
	}

	new_string = malloc(sizeof(char) * (n + s1_size) + 1);

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
		new_string[i] = s1[i];

	for (i = 0; i < n; i++)
		new_string[s1_size + i] = s2[i];

	new_string[n + s1_size] = '\0';

	return (new_string);
}

