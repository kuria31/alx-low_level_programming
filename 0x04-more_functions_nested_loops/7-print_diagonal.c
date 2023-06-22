#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: umber of times the character \ should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int let, space;

	if (n > 0)
	{
		for (let = 0; let < n; let++)
		{
			for (space = 0; space < let; space++)
			{
			_putchar(32);
			_putchar(92);
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
