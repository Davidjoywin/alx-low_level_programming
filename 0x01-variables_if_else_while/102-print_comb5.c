#include <stdio.h>

/**
 * main - initialization of alphabet code
 * Return: return 0
 */

int main(void)
{
	int r_num2;
	int r_num1;
	int l_num2;
	int l_num1 = 0;

	while (l_num1 < 10)
	{
		l_num2 = 0;
		while (l_num2 < 10)
		{
			r_num1 = 0;
			while (r_num1 < 10)
			{
				r_num2 = 0;
				while (r_num2 < 10)
				{
					if (!(l_num1 == r_num2 && l_num2 == r_num1))
					{
						putchar('0' + l_num1);
						putchar('0' + l_num2);
						putchar(' ');
						putchar('0' + r_num1);
						putchar('0' + r_num2);
						if (!(l_num1 + l_num2 == 18 && r_num2 + r_num1 == 17 && r_num1 == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
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

