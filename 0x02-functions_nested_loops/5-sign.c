#include "main.h"
/**
 * print_sign - a function that prints the sign of a number.
 *@n:  This is n int parameter value
 * Return: 0 IS ZERO. 1 is greater then zero. -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
