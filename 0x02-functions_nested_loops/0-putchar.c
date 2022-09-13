#include "main.h"

/**
 * main - entry point
 *
 * Returns: return 0
 */

int main(void)
{
	char word[] = "_putchar";
	int i = 0;
	while (i < sizeof(word) - 1)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
