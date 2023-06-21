#include "main.h"
/**
 * print_to_98 -  function that prints all natural numbers from n to 98
 * @n: The first number to be printed
 * Return: 0
 */
void print_to_98(int n)
{
	for (n = 1; n <= 98; n++)
	{
		_putchar(44);
		_putchar(32);
		_putchar(n);
	}
	_putchar('\n');
}
