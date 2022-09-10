#include <stdio.h>

/**
 * main - initialization of alphabet code
 * Return: return 0
 */

int main(void)
{
	int l_num1 = 0;
	int l_num2 = 0;
	int r_num1 = 0;
	int r_num2 = 0;

	while (l_num1 < 10)
	{
		while (l_num2 < 10)
		{
			while (r_num1 < 10)
			{
				while (r_num2 < 10)
				{
					putchar(48 + l_num1);
					putchar(48 + l_num2);
					putchar(' ');
					putchar(48 + r_num1);
					putchar(48 + r_num2);
					putchar(',');
					putchar(' ');
					r_num2++;
				}
				r_num1++;
			}
			l_num2++;
		}
		l_num1++;
	}
	putchar('\n');
	return (0);
}
