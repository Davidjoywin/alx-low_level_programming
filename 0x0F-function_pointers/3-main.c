#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - arithmetic in the terminal
 * @argc: size of array
 * @argv: array from the terminal
 * Return: returns int
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*get_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	get_op = get_op_func(argv[2]);
	if (!get_op)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%i\n", get_op(a, b));
	return (0);
}
