#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: param string to check
 * Return: return 1 if a string is palindrom and 0 if not
 */

int string_len(char *s);

int i = 0;

int is_palindrome(char *s)
{
	int n;

	n = string_len(s);
	if ((i <= n) && (*(s + i) == *(s + n - i)))
	{
		i++;
		printf("i == %d, n = %d, test for palindrome\n", i, n);
		return is_palindrome(s);
	}
	else if ((i == n) && (*(s + i) == *(s + n - i)))
	{
		printf("i == %d, n == %d, test for palindrome\n", i, n);
		return (0);
	}
}


/**
 * string_len - return the length of a string
 * @s: param string
 * Return: return length of a string
 */

int string_len(char *s)
{
	int i, len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	return (len);
}
