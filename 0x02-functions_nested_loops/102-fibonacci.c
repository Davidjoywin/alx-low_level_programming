#include <stdio.h>

/**
 * main - fibonacci sequence
 * Return: return (0)
 */

int main(void)
{
	int n = 0;
	unsigned long tmp;
	unsigned long a, b;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	while (n < 50 - 2)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		printf("%ld", tmp);
		if (n != 50 - 3)
		{
			printf(", ");
		}

		n++;
	}
	putchar('\n');
	return (0);
}
