#include <stdio.h>

/**
 * main - fibonacci sequence
 * Return: return (0)
 */

int main(void)
{
	int n = 0;
	unsigned long tmp;
	unsigned long a, b, sum;

	a = 1;
	b = 2;

	while (n < 50 - 2)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		if (tmp % 2 == 0)
		{
			sum += tmp;
		}
		if (tmp > 4000000)
		{
			break;
		}
		n++;
	}
	printf("%ld\n", sum);
	return (0);
}
