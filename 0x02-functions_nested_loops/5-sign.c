#include "main.h"
/**
 * print_sign -  function that prints the sign of a number
 * @n: the ineger that is going to be inputed
 * Return: 0 if number is zero. 1 if number is greater than number. -1 if number is lesss than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
