#include <stdio.h>
#include <stdlib.h>

int get_size(char num[]);
int convert_to_int(char num[]);
/**
 * main - entry point of the mul program
 * @argc: size of argv
 * @argv: command line argument in char array
 * Return: return int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	mul = convert_to_int(argv[1]) * convert_to_int(argv[2]);

	printf("%lu\n", mul);

	return (0);
}

/**
 * get_size - geting the size of each num in char type in the array, argv
 * @num: numbers in char stored in an array char
 * Return: return int
 */

int get_size(char num[])
{
	int size;

	size = 0;
	while (num[size] != '\0')
		size++;

	return (size);
}
/**
 * convert_to_int - convert value from array char, string to integer
 * @num: number stored in an array char, string
 * Return: return the converted num
 */

int convert_to_int(char num[])
{
	int i, tmp, size_char;
	unsigned long converted_num;

	converted_num = 0;
	size_char = get_size(num);
	for (i = 0; i < size_char; i++)
	{
		tmp = ((int)num[i]) - 48;
		converted_num *= 10;
		converted_num += tmp;
	}
	return (converted_num);
}

