#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @str: pointer to string params
 *
 * Return: Return pointer to char
 */

char *rot13(char *str)
{
	int i;
	int j;
	char letter_n[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char letter_p[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < (int)sizeof(letter_n); j++)
		{
			if (str[i] == letter_n[j])
			{
				str[i] = letter_p[j];
				break;
			}
		}
	}
	return (str);
}
