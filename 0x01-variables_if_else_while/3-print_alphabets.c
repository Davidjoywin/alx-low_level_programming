#include <stdio.h>

/**
 * main - initialization of alphabet code
 * Return: return 0
 */

int main(void)
{
	char lower_alpha = 'a';
	char upper_alpha = 'A';
	char lower_alpha_end = 'z';
	char upper_alpha_end = 'Z';

	for (; lower_alpha <= lower_alpha_end; lower_alpha++)
	{
		putchar(lower_alpha);
	}

	for (; upper_alpha <= upper_alpha_end; upper_alpha++)
	{
		putchar(upper_alpha);
	}
	putchar('\n');
	return (0);
}
