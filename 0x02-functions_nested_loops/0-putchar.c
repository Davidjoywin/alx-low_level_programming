#include "main.h"

/**
 * main - entry point
 *
 * Returns: return 0
 */

int main(void)
{
	char word[] = "_putchar";
	for (int i = 0; i < sizeof(word) - 1; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
