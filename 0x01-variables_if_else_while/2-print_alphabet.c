#include <stdio.h>

/**
 * main - initialize the alphabet game
 * Return: return 0
 */

int main(void)
{
	char alpha_start = 'a';
	char alpha_last = 'z';

	while (alpha_start <= alpha_last)
	{
		putchar(alpha_start);
		alpha_start++;
	}
	putchar('\n');
	return (0);
}
