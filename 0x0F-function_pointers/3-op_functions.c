#include "3-calc.h"

/**
 * op_add - sum a and b
 * @a: integer to add
 * @b: integer to add
 * Return: return the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b
 * @a: integer to subtract from
 * @b: integer to subtract
 * Return: returns the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b
 * @a: integer to multiply
 * @b: integer to multiply
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: dividend
 * @b: divisor
 * Return: returns the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - reminder of the division of a by b
 * @a: dividend
 * @b: divisor
 * Return: returns the reminder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
