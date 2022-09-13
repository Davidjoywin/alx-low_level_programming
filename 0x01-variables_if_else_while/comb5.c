#include <stdio.h>

int main(void)
{		
	int l_num1 = 0;
	int l_num2;
	int r_num1;
	int r_num2;

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
					putchar('0' + l_num1);
					putchar('0' + l_num2);
					putchar(' ');
					putchar('0' + r_num1);
					putchar('0' + r_num2);
					r_num2++;
				}
				r_num1++;
			}
			l_num2++;
		}
		l_num1++;
		l_num2 = 0;
		r_num1 = 0;
		r_num2 = 0;
	}
	putchar('\n');
	return (0);
}
