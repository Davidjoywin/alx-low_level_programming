#include <stdio.h>

int not_last(int n);

int main(void)
{
	int n = 0;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizz_buzz[] = "FizzBuzz";
	while (n < 100)
	{
		n++;
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("%s", fizz_buzz);
			if (not_last(n))
			{
				printf(" ");
			}
		}

		else if (n % 3 == 0)
		{
			printf("%s", fizz);
			if (not_last(n))
			{
				printf(" ");
			}
		}

		else if (n % 5 == 0)
		{
			printf("%s", buzz);
			if (not_last(n))
			{
				printf(" ");
			}
		}

		else
		{
			printf("%d", n);
			if (not_last(n))
			{
				printf(" ");
			}
		}
	}
	printf("\n");
	return (0);
}

int not_last(int n)
{
	return (n != 100);
}
