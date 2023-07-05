#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x
 * @x: this is the base of a numbe r
 * @y: this is the power of x
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
