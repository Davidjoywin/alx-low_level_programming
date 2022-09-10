#include <stdio.h>

/**
 * main - initialization of alphabet code
 * Return: return 0
 */

int main(void)
{
	int digit;

	while (digit < 10)
	{
		putchar(48 + digit);
		putchar(',');
		putchar(' ');
		digit++;
	}	
	putchar('\n');
	return (0);
}
