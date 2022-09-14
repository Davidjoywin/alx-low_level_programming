#include <stdio.h>

/**
 * main - sum of multiple of 3 or 5
 * Return: return (0)
 */

int main(void)
{
	unsigned long sum;
	int i = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
