#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition function
 * @a: variable 1
 * @b: variable 2
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: first interger
 * @b: second integer
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * opt_mul - multiplication function
 * @a: integer 1
 * @b: integer 2
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: integer 1
 * @b: integer 2
 * Retunr: a * b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus function
 * @a: integer 1
 * @b: integer 2
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
