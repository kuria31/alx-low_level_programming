#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: the variamble used to print the line
 * Return: 0
 */
void print_line(int n)
{
	int let;
	
	if (let > 0)
	{
		for (let = 0; let < n; n++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
