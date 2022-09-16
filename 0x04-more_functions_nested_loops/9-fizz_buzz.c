#include <stdio.h>

int not_last(int n);

/**
 * main - entry point for fizzbuzz program
 * Return: return 0
 */

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

/**
 * not_last - to check if an the loop ended
 * @n: params to monitor the end
 * Return: return either 0 or 1
 */

int not_last(int n)
{
	return (n != 100);
}
