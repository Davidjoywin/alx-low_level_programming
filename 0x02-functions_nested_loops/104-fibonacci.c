#include <stdio.h>

/**
 * main - fibonacci sequence
 * Return: return (0)
 */

int main(void)
{
	int n = 0;
	unsigned long int tmp;
	unsigned long int a, b;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	while (n <= 98 - 2)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		printf("%ld", tmp);
		if (n != 98 - 2)
		{
			printf(", ");
		}

		n++;
	}
	putchar('\n');
	return (0);
}

