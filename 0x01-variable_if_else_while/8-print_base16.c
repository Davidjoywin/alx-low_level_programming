#include <stdio.h>

/**
 * main - initialization of alphabet code
 * Return: return 0
 */

int main(void)
{
	char base16_0 = '0';
	char base16_9 = '9';
	char base16_10 = 'a';
	char base16_15 = 'f';

	while (base16_0 <= base16_9)
	{
		putchar(base16_0);
		base16_0++;
	}
	while (base16_10 <= base16_15)
	{
		putchar(base16_10);
		base16_10++;
	}
	putchar('\n');
	return (0);
}
