#include <stdio.h>

/**
 * main - prints the name of the file a program is compiled from
 * Return: return int
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
