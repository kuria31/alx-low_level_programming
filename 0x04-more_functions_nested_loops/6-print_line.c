#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: the variamble used to print the line
 * Return: 0
 */
void print_line(int n)
{
	for (n = 0; n >= 10; n++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
