#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: the first n bytes of s2
 * Return: returns the concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, s1_size, s2_size;
	char *new_string;

	s1_size = 0;
	while (s1[s1_size] != '\0')
		s1_size++;

	s2_size = 0;
	while (s2[s2_size] != '\0')
		s2_size++;

	new_string = malloc(sizeof(char) * (n + s1_size) + 1);

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
		new_string[i] = s1[i];

	if ((int)n >= s2_size)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			new_string[s1_size + i] = s2[i];
			i++;
		}
	}
	else
	{
		for (i = 0; i < (int)n; i++)
			new_string[s1_size + i] = s2[i];
	}

	new_string[n + s1_size] = '\0';

	return (new_string);
}

