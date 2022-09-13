#include "main.h"

/**
 * main - entry point
 *
 * Return: return 0
 */

int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (i < (int)sizeof(word) - 1)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
