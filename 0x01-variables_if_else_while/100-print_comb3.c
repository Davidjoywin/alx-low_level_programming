#include <stdio.h>

/**
 * main - initialization of alphabet code
 * Return: return 0
 */

int main(void)
{
	int left;
	int right = 1;

	while (left < 10)
	{
		while (right < 10)
		{
			putchar(48 + left);
			putchar(48 + right);
			if (left != 10 - 2)
			{
				putchar(',');
				putchar(' ');
			}
			right++;
		}
		left++;
		right = left + 1;
	}
	putchar('\n');
	return (0);
}
